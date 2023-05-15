// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BuildActor.h"
#include "Engine/DataTable.h"
#include "BuildComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPROJECT3_API UBuildComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBuildComponent();

protected:

	virtual void BeginPlay() override;

	// Build Variables
	UPROPERTY(BlueprintReadWrite, Category = "Build Mode")
	bool bIsBuildModeOn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
	int BuildingTraceRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
	UDataTable* BuildingMeshDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
	bool Debug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	bool bEnableSnapping;

	UPROPERTY(EditAnywhere, Category = "Build Mode")
	float SnappingSensitivity = 3000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
	float GridSizeInput = 30.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Building")
	UStaticMesh* GhostMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Building")
	UStaticMesh* BuildingMesh;

	UFUNCTION(BlueprintCallable, Category = "Building")
	void ChangeMesh();

	UPROPERTY(EditDefaultsOnly, Category = "Building")
	UMaterialInterface* ValidBuildMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "Building")
	UMaterialInterface* InvalidLocationMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Building")
	float SphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Building")
	float UpdateCachedLineTraceResultInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building")
	float RotationSpeed;

	UFUNCTION(BlueprintCallable, Category = "Building")
	void RotateBuilding(float DeltaRotation);

	// Build Functions

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void DeleteBuild();

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	FHitResult PerformLineTrace(const int LineTraceRange, bool bDebug = false);

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void SetBuildMode(bool bSetBuildMode) { bIsBuildModeOn = bSetBuildMode; };

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	FORCEINLINE bool GetBuildMode() { return bIsBuildModeOn;};

	ABuildActor* GetHitBuildingActor(const FHitResult& HitResult);

	// .h file

	UFUNCTION(BlueprintCallable, Category = "BuildComponent")
		TArray<FHitResult> PerformBoxTrace(const FVector& BoxExtent, bool bDebug);


public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;	

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void SpawnBuilding();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Building")
	float BuildDistance;

	UPROPERTY(EditDefaultsOnly, Category = "Build")
	float OverlapRadius;

private:
	AActor* Owner;
	UCameraComponent* Camera;
	USkeletalMeshComponent* SkeletalMeshComponent;
	TSubclassOf<class ABuildActor> BuildingActorClass;
	UStaticMesh* GetDataFromDataTable(FName RowName);
	TMap<UStaticMesh*, ABuildActor*> BuildingActors;
	UStaticMeshComponent* BuildGhostMesh;
	int32 CurrentRowIndex;
	FHitResult CachedLineTraceResult;
	TArray<FHitResult> PerformConeTrace(const float TraceRange, const float ConeHalfAngle, bool bDebug);
	FTimerHandle UpdateCachedLineTraceResultTimerHandle;
	TArray<FName> socketNames;
};
