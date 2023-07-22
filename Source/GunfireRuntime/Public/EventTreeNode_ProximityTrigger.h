#pragma once
#include "CoreMinimal.h"
#include "EYesNo.h"
#include "EventTreeNode_ManualTrigger.h"
#include "EventTreeNode_ProximityTrigger.generated.h"

UCLASS(Blueprintable)
class UEventTreeNode_ProximityTrigger : public UEventTreeNode_ManualTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo HasLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo InView;
    
    UEventTreeNode_ProximityTrigger();
};

