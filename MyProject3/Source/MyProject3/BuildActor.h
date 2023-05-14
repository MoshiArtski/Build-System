#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/DataTable.h"
#include "BuildActor.generated.h"

USTRUCT(BlueprintType)
struct FBuildingMeshData : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "buildName"))
        FString buildName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "buildMesh"))
        TObjectPtr<UStaticMesh> buildMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "ghostMesh"))
        TObjectPtr<UStaticMesh> buildGhostMesh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "socketNames"))
        TArray<FName> socketNames;
};

UCLASS()
class MYPROJECT3_API ABuildActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABuildActor();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build Mode")
    UInstancedStaticMeshComponent* BaseInstancedMesh;

    int32 GetHitIndex(const FHitResult& HitResult);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;


public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    void DestroyInstance(const FHitResult& HitResult);

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    FTransform GetInstancedSocketTransform(UInstancedStaticMeshComponent* InstancedComponent, int32 InstanceIndex, const FName SocketName, bool& Success, bool bWorldSpace = false);

    FTransform GetClosestSocketTransform(UInstancedStaticMeshComponent* HitComponent, int32 HitIndex, const FVector& HitLocation);

    FTransform GetHitSocketTransform(const FHitResult& HitResult);

    FTransform GetHitSocketTransform(const FHitResult& HitResult, const FHitResult& ComponentHit);
};
