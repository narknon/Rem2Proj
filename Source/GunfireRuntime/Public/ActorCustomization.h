#pragma once
#include "CoreMinimal.h"
#include "ActorCustomizationBase.h"
#include "ActorCustomization.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UActorCustomization : public UActorCustomizationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HardReferenceAssets;
    
    UActorCustomization();
};

