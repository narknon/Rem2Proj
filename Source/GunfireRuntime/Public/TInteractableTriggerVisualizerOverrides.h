#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TInteractableTriggerVisualizerOverrides.generated.h"

class UInteractableStateBase;

USTRUCT(BlueprintType)
struct FTInteractableTriggerVisualizerOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTriggerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractableStateBase> TriggerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerPropertyOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTriggerOriginOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerOriginOverride;
    
    GUNFIRERUNTIME_API FTInteractableTriggerVisualizerOverrides();
};

