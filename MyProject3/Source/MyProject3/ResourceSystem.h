#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Components/Image.h"
#include "ResourceSave.h"
#include "ResourceSystem.generated.h"





UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MYPROJECT3_API UResourceSystem : public UActorComponent
{
    GENERATED_BODY()

public:
    UResourceSystem();

    UFUNCTION(BlueprintCallable, Category = "Resource Save Data")
        void SavePlayerResources();

    UFUNCTION(BlueprintCallable, Category = "Resource Save Data")
        void LoadPlayerResources();

    UPROPERTY(BlueprintReadWrite, Category = "Resource Save Data")
        TMap<FName, FResourceQuantity> OwnedResources;

protected:

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Resource Save Data")
    FString SaveSlotName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Resource Save Data")
    int32 UserIndex;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
    UDataTable* ResourceDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Build Mode")
    FBuildResource Resource;

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    FORCEINLINE FBuildResource GetResource() const { return Resource; }

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    FBuildResource GetResourceData(FName ResourceRowName) const;

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    void SetResource(const FBuildResource& NewResource) { Resource = NewResource; }

    UFUNCTION(BlueprintCallable, Category = "Build Mode")
    void AddResourceToInventory(FName& ResourceToAdd, const int32 NumToAdd);

private:
    void GetResourceFromDataTable(FName ResourceRowName);

    UPROPERTY()
    TMap<FName, FBuildResource> CachedResources;

};