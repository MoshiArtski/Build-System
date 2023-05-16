#include "BuildActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMeshSocket.h"


// Sets default values
ABuildActor::ABuildActor()
{
    PrimaryActorTick.bCanEverTick = true;

    BaseInstancedMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BaseInstancedMesh"));

    RootComponent = BaseInstancedMesh;
}

void ABuildActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Added"));
}

void ABuildActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void ABuildActor::DestroyInstance(const FHitResult& HitResult)
{
    int32 HitInstanceIndex = INDEX_NONE;
    UInstancedStaticMeshComponent* HitComponent = Cast<UInstancedStaticMeshComponent>(HitResult.Component.Get());

    if (HitComponent && HitComponent == BaseInstancedMesh)
    {
        HitInstanceIndex = HitResult.Item;
    }

    if (HitInstanceIndex != INDEX_NONE)
    {
        BaseInstancedMesh->RemoveInstance(HitInstanceIndex);
    }
}

int32 ABuildActor::GetHitIndex(const FHitResult& HitResult)
{
    if (!HitResult.Component.IsValid())
    {
        return -1;
    }

    UInstancedStaticMeshComponent* HitComponent = Cast<UInstancedStaticMeshComponent>(HitResult.Component.Get());

    if (!HitComponent)
    {
        return -1;
    }

    // Get the size of the mesh from the UInstancedStaticMeshComponent
    UStaticMesh* Mesh = HitComponent->GetStaticMesh();
    if (!Mesh)
    {
        return -1;
    }

    FVector MeshSize = Mesh->GetBounds().BoxExtent * 2.0f;
    float Radius = MeshSize.GetMax() * 40.0f;

    TArray<int32> HitIndexes = HitComponent->GetInstancesOverlappingSphere(HitResult.Location, Radius);

    int32 ClosestInstanceIndex = -1;
    float ClosestDistanceSquared = FLT_MAX;

    for (int32 InstanceIndex : HitIndexes)
    {
        FTransform InstanceTransform;
        if (HitComponent->GetInstanceTransform(InstanceIndex, InstanceTransform, true))
        {
            float DistanceSquared = FVector::DistSquared(InstanceTransform.GetLocation(), HitResult.Location);
            if (DistanceSquared < ClosestDistanceSquared)
            {
                ClosestInstanceIndex = InstanceIndex;
                ClosestDistanceSquared = DistanceSquared;
            }
        }
    }

    return ClosestInstanceIndex;
}

TOptional<FTransform> ABuildActor::GetHitSocketTransform(const FHitResult& HitResult, const TArray<FString>& socketTag)
{
    int32 HitIndex = GetHitIndex(HitResult);

    if (!HitResult.Component.IsValid())
    {
        return TOptional<FTransform>();
    }

    UInstancedStaticMeshComponent* HitComponent = Cast<UInstancedStaticMeshComponent>(HitResult.Component.Get());

    if (!HitComponent)
    {
        return TOptional<FTransform>();
    }

    return GetClosestSocketTransform(HitComponent, HitIndex, HitResult.Location, socketTag);
}

TOptional<FTransform> ABuildActor::GetClosestSocketTransform(UInstancedStaticMeshComponent* HitComponent, int32 HitIndex, const FVector& HitLocation, const TArray<FString>& socketTag)
{
    if (!HitComponent || HitIndex < 0)
    {
        return TOptional<FTransform>();
    }

    FTransform InstanceTransform;
    HitComponent->GetInstanceTransform(HitIndex, InstanceTransform, true);

    UStaticMesh* StaticMesh = HitComponent->GetStaticMesh();
    FName ClosestSocketName;
    float ClosestDistanceSquared = FLT_MAX;

    for (const FName& SocketName : HitComponent->GetAllSocketNames())
    {
        UStaticMeshSocket* Socket = StaticMesh->FindSocket(SocketName);

        if (Socket && (socketTag.Num() == 0 || socketTag.Contains(Socket->Tag)))
        {
            FTransform SocketTransform = HitComponent->GetSocketTransform(SocketName, ERelativeTransformSpace::RTS_Component);
            FTransform SocketInstanceTransform = SocketTransform * InstanceTransform;

            float DistanceSquared = FVector::DistSquared(SocketInstanceTransform.GetLocation(), HitLocation);
            if (DistanceSquared < ClosestDistanceSquared)
            {
                ClosestSocketName = SocketName;
                ClosestDistanceSquared = DistanceSquared;
            }
        }
    }
    if (ClosestSocketName != NAME_None)
    {
        FTransform SocketTransform = HitComponent->GetSocketTransform(ClosestSocketName, ERelativeTransformSpace::RTS_Component);
        return SocketTransform * InstanceTransform;
    }

    return TOptional<FTransform>();
}
