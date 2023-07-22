#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "MaterialOverrideCustomization.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMaterialOverrideCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UMaterialOverrideCustomization();
};

