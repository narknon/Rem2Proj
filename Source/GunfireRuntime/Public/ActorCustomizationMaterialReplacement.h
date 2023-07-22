#pragma once
#include "CoreMinimal.h"
#include "ActorCustomizationMaterialReplacement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FActorCustomizationMaterialReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllMeshes;
    
    GUNFIRERUNTIME_API FActorCustomizationMaterialReplacement();
};

