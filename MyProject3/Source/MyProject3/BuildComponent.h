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
	UBuildComponent();

protected:

	virtual void BeginPlay() override;

	// Build Variables
	UPROPERTY(BlueprintReadWrite, Category = "Build Mode Settings")
	bool bIsBuildModeOn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	int BuildingTraceRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	UDataTable* BuildingMeshDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	bool bEnableSnapping;

	UPROPERTY(EditDefaultsOnly, Category = "Build Mode Settings")
	float SnappingSensitivity = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	float GridSizeInput = 30.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	float UpdateInterval = 0.01;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settingsg")
	float RotationSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode Settings")
	bool Debug;


	UPROPERTY(EditDefaultsOnly, Category = "Building Settings")
	UMaterialInterface* ValidBuildMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "Building")
	UMaterialInterface* InvalidLocationMaterial;

	// Build Functions

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void SpawnBuilding();

	UFUNCTION(BlueprintCallable, Category = "Building")
	void RotateBuilding(float DeltaRotation);

	UFUNCTION(BlueprintCallable, Category = "Building")
	void ChangeMesh();

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void DeleteBuild();

	// Support Functions

	UFUNCTION(BlueprintCallable, Category = "Build")
	FHitResult PerformLineTrace(const int LineTraceRange, bool bDebug = false);

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	void SetBuildMode(bool bSetBuildMode) { bIsBuildModeOn = bSetBuildMode; };

	UFUNCTION(BlueprintCallable, Category = "Build Mode")
	FORCEINLINE bool GetBuildMode() { return bIsBuildModeOn;};

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;	

private:
	//Caches
	UPROPERTY()
	UStaticMesh* GhostMesh;

	UPROPERTY()
	UStaticMesh* BuildingMesh;

	UPROPERTY()
	AActor* Owner;

	UPROPERTY()
	UCameraComponent* Camera;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY()
	TSubclassOf<class ABuildActor> BuildingActorClass;

	UPROPERTY()
	TMap<UStaticMesh*, ABuildActor*> BuildingActors;

	UPROPERTY()
	UStaticMeshComponent* BuildGhostMesh;

	UPROPERTY()
	int32 CurrentRowIndex;

	UPROPERTY()
	FHitResult CachedLineTraceResult;

	UPROPERTY()
	FTimerHandle UpdateBuildComponentTimerHandle;

	TArray<FString>* socketTagList;

	UPROPERTY()
	TArray<FBuildingMeshData> BuildingMeshDataArray;

	//Used Functions
	UFUNCTION()
	void UpdateBuildComponent();

	UFUNCTION()
	void InitializeBuildingMeshDataArray();

	UFUNCTION()
	FVector GetSpawnLocationWithSocketAttachment(ABuildActor* HitBuildingActor, FRotator& OutSpawnRotation);

	UFUNCTION()
	FVector GetSpawnLocationWithSnapping();

	UFUNCTION()
	ABuildActor* GetHitBuildingActor(const FHitResult& HitResult);

	UFUNCTION()
	void SetBuildGhostMeshTransform(const FVector& SpawnLocation, const FRotator& SpawnRotation);

	UFUNCTION()
	UStaticMesh* GetDataFromDataTable(FName RowName);
};
