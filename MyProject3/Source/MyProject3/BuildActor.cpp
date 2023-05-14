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


FTransform ABuildActor::GetInstancedSocketTransform(UInstancedStaticMeshComponent* InstancedComponent, int32 InstanceIndex, const FName SocketName, bool& Success, bool bWorldSpace)
{
    Success = false;

    if (InstancedComponent && InstancedComponent->IsValidInstance(InstanceIndex))
    {
        UStaticMesh* StaticMesh = InstancedComponent->GetStaticMesh();

        if (StaticMesh)
        {
            UStaticMeshSocket* Socket = StaticMesh->FindSocket(SocketName);

            if (Socket)
            {
                FTransform InstanceTransform;
                InstancedComponent->GetInstanceTransform(InstanceIndex, InstanceTransform, bWorldSpace);

                FTransform SocketLocalTransform(Socket->RelativeRotation, Socket->RelativeLocation, Socket->RelativeScale);

                FTransform SocketWorldTransform = SocketLocalTransform * InstanceTransform;

                Success = true;
                return SocketWorldTransform;
            }
        }
    }
    return FTransform::Identity;
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

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Hit index is %d"), ClosestInstanceIndex));
    }
    UE_LOG(LogTemp, Warning, TEXT("Hit index is %d"), ClosestInstanceIndex);
    return ClosestInstanceIndex;
}


FTransform ABuildActor::GetHitSocketTransform(const FHitResult& HitResult)
{
    int32 HitIndex = GetHitIndex(HitResult);

    if (!HitResult.Component.IsValid())
    {
        return FTransform::Identity;
    }

    UInstancedStaticMeshComponent* HitComponent = Cast<UInstancedStaticMeshComponent>(HitResult.Component.Get());

    if (!HitComponent)
    {
        return FTransform::Identity;
    }

    return GetClosestSocketTransform(HitComponent, HitIndex, HitResult.Location);
}

FTransform ABuildActor::GetHitSocketTransform(const FHitResult& HitResult, const FHitResult& ComponentHit)
{
    int32 HitIndex = GetHitIndex(ComponentHit);

    UInstancedStaticMeshComponent* HitComponent = Cast<UInstancedStaticMeshComponent>(ComponentHit.Component.Get());

    return GetClosestSocketTransform(HitComponent, HitIndex, HitResult.Location);
}


FTransform ABuildActor::GetClosestSocketTransform(UInstancedStaticMeshComponent* HitComponent, int32 HitIndex, const FVector& HitLocation)
{
    if (!HitComponent || HitIndex < 0)
    {
        return FTransform::Identity;
    }

    FTransform InstanceTransform;
    HitComponent->GetInstanceTransform(HitIndex, InstanceTransform, true);

    FName ClosestSocketName;
    float ClosestDistanceSquared = FLT_MAX;

    for (const FName& SocketName : HitComponent->GetAllSocketNames())
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

    if (ClosestSocketName != NAME_None)
    {
        FTransform SocketTransform = HitComponent->GetSocketTransform(ClosestSocketName, ERelativeTransformSpace::RTS_Component);
        UE_LOG(LogTemp, Warning, TEXT("Instance index: %d, Closest socket name: %s"), HitIndex, *ClosestSocketName.ToString());

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Instance index: %d, Closest socket name: %s"), HitIndex, *ClosestSocketName.ToString()));
        }
        return SocketTransform * InstanceTransform;
    }
    else
    {
        return FTransform::Identity;
    }
}