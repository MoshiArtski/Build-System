#include "BuildComponent.h"
#include "BuildActor.h"
#include "MyProject3Character.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UBuildComponent::UBuildComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	BuildingActorClass = ABuildActor::StaticClass();
	BuildGhostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildMeshComponent"));
	Debug = false;
	CurrentRowIndex = 0;
	bEnableSnapping = true;
	RotationSpeed = 45.0f;
}

// Called when the game starts
void UBuildComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<AMyProject3Character>(GetOwner());

	if (Owner != nullptr)
	{
		Camera = Owner->FindComponentByClass<UCameraComponent>();
		SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
	}

	ChangeMesh();

	BuildGhostMesh->SetHiddenInGame(false);
	BuildGhostMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BuildGhostMesh->SetCollisionResponseToAllChannels(ECR_Block);
	BuildGhostMesh->SetCastShadow(false);
	BuildGhostMesh->SetOnlyOwnerSee(false);

	if (Owner != nullptr && Owner->GetRootComponent() != nullptr)
	{
		BuildGhostMesh->SetupAttachment(Owner->GetRootComponent());
	}

	bIsBuildModeOn = false;
}

void UBuildComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsBuildModeOn)
	{
		CachedLineTraceResult = PerformLineTrace(BuildingTraceRange, Debug);
		FVector SpawnLocation;
		FRotator SpawnRotation = BuildGhostMesh->GetComponentRotation();

		if (CachedLineTraceResult.bBlockingHit)
		{
			ABuildActor* HitBuildingActor = GetHitBuildingActor(CachedLineTraceResult);
			if (HitBuildingActor && bEnableSnapping)
			{
				int32 HitIndex = HitBuildingActor->GetHitIndex(CachedLineTraceResult);
				FTransform SocketToAttach = HitBuildingActor->GetHitSocketTransform(CachedLineTraceResult, CachedLineTraceResult);
				SpawnLocation = SocketToAttach.GetLocation();
				SpawnRotation = SocketToAttach.GetRotation().Rotator(); // Update the rotation based on the socket transform
			}
			else
			{
				if (bEnableSnapping)
				{
					FVector GridSize(GridSizeInput, GridSizeInput, GridSizeInput);
					FVector SnappedLocation = FVector(
						FMath::GridSnap(CachedLineTraceResult.Location.X, GridSize.X),
						FMath::GridSnap(CachedLineTraceResult.Location.Y, GridSize.Y),
						FMath::GridSnap(CachedLineTraceResult.Location.Z, GridSize.Z)
					);
					SpawnLocation = SnappedLocation;
				}
				else
				{
					SpawnLocation = CachedLineTraceResult.Location;
				}
			}
		}

		FVector OffsetSpawnLocation = SpawnLocation;

		FTransform NewTransform(SpawnRotation, OffsetSpawnLocation);
		FTransform ResultTransform;
		ResultTransform.SetLocation(OffsetSpawnLocation);
		ResultTransform.SetRotation(NewTransform.GetRotation());
		BuildGhostMesh->SetWorldTransform(ResultTransform);

		BuildGhostMesh->SetHiddenInGame(false);
	}
	else
	{
		BuildGhostMesh->SetHiddenInGame(true);
	}
}



void UBuildComponent::RotateBuilding(float DeltaRotation)
{
	if (bIsBuildModeOn)
	{
		float NewYaw = BuildGhostMesh->GetComponentRotation().Yaw + DeltaRotation * RotationSpeed;
		BuildGhostMesh->SetWorldRotation(FRotator(0.0f, NewYaw, 0.0f));
	}
}

FHitResult UBuildComponent::PerformLineTrace(const int LineTraceRange, bool bDebug)
{
	FVector SpawnLocation = Camera->GetComponentLocation();
	FVector SpawnDirection = Camera->GetForwardVector();
	FVector SpawnEnd = SpawnDirection * LineTraceRange + SpawnLocation;

	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(Owner);
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;

	// Modify the following line:
	bool bHit = GetWorld()->SweepSingleByChannel(HitResult, SpawnLocation, SpawnEnd, FQuat::Identity, ECC_Camera, FCollisionShape::MakeCapsule(SnappingSensitivity, SnappingSensitivity), TraceParams);

	if (bDebug)
	{
		FColor DebugLineColor = bHit ? FColor::Red : FColor::Green;
		float DebugLineLifetime = 5.0f;
		uint8 DepthPriority = 0;
		float LineThickness = 2.0f;
		DrawDebugCapsule(GetWorld(), SpawnLocation + 0.5 * (SpawnEnd - SpawnLocation), 10.0f, 50.0f, FQuat::Identity, DebugLineColor, true, DebugLineLifetime, DepthPriority, LineThickness);
	}

	return HitResult;
}


void UBuildComponent::DeleteBuild()
{
	if (CachedLineTraceResult.bBlockingHit)
	{
		ABuildActor* BuildComp = Cast<ABuildActor>(CachedLineTraceResult.GetActor());
		if (BuildComp)
		{
			BuildComp->DestroyInstance(CachedLineTraceResult);
		}
	}
}

void UBuildComponent::SpawnBuilding()
{
	if (BuildingActorClass && BuildGhostMesh->IsVisible() && BuildingMesh && CachedLineTraceResult.bBlockingHit)
	{
		bool bHasEnoughResources = true;

		if (bHasEnoughResources)
		{
			FTransform InstanceTransform = BuildGhostMesh->GetComponentTransform();

			ABuildActor*& NewBuildingInstanceActor = BuildingActors.FindOrAdd(BuildingMesh);

			if (!NewBuildingInstanceActor)
			{
				NewBuildingInstanceActor = GetWorld()->SpawnActor<ABuildActor>(BuildingActorClass, FVector::ZeroVector, FRotator::ZeroRotator);
				NewBuildingInstanceActor->BaseInstancedMesh->SetStaticMesh(BuildingMesh);
			}

			NewBuildingInstanceActor->BaseInstancedMesh->AddInstance(InstanceTransform);

			SetBuildMode(false);
			BuildGhostMesh->SetHiddenInGame(true);
			UE_LOG(LogTemp, Warning, TEXT("Spawned"));
		}
	}
}


void UBuildComponent::ChangeMesh()
{
	if (!BuildingMeshDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Table"));
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Table Found"));
	TArray<FName> RowNames = BuildingMeshDataTable->GetRowNames();
	CurrentRowIndex = (CurrentRowIndex + 1) % RowNames.Num();

	FBuildingMeshData* NextRow = BuildingMeshDataTable->FindRow<FBuildingMeshData>(RowNames[CurrentRowIndex], *RowNames[CurrentRowIndex].ToString());

	if (NextRow)
	{
		BuildingMesh = NextRow->buildMesh;
		GhostMesh = NextRow->buildGhostMesh;
		BuildGhostMesh->SetStaticMesh(GhostMesh);
		UE_LOG(LogTemp, Warning, TEXT("Set Mesh: %s"), *GhostMesh->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Mesh not found in DataTable"));
	}

}

ABuildActor* UBuildComponent::GetHitBuildingActor(const FHitResult& HitResult)
{
	return Cast<ABuildActor>(HitResult.GetActor());
}


UStaticMesh* UBuildComponent::GetDataFromDataTable(FName RowName)
{
	if (!BuildingMeshDataTable)
	{
		return nullptr;
	}

	FBuildingMeshData* Row = BuildingMeshDataTable->FindRow<FBuildingMeshData>(RowName, TEXT("MESH"));

	if (Row)
	{
		return Row->buildMesh;
	}

	return nullptr;
}