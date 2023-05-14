// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Components/Image.h"
#include "Engine/DataTable.h"
#include "ResourceSave.generated.h"


USTRUCT(BlueprintType)
struct FBuildResource : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Name"))
        FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Icon", MakeStructureDefaultValue = "None"))
        TObjectPtr<UImage> Icon;
};

USTRUCT(BlueprintType)
struct FResourceQuantity 
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Resource Name"))
        FBuildResource ResourceData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Quantity Owned"))
        int Quantity;
};


class UResourceSystem;

UCLASS()
class MYPROJECT3_API UResourceSave : public USaveGame
{
    GENERATED_BODY()

public:
    UResourceSave();

    UPROPERTY(VisibleAnywhere, Category = Basic)
        FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, Category = Basic)
        int32 UserIndex;

    UPROPERTY(VisibleAnywhere, Category = Basic)
        TMap<FName, FResourceQuantity> OwnedResources;
};
