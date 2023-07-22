#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ConditionalNotifyInterface.h"
#include "Conditions.h"
#include "ENotifyOptimizationType.h"
#include "ConditionalAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UConditionalAnimNotifyState : public UAnimNotifyState, public IConditionalNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyOptimizationType OptimizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
public:
    UConditionalAnimNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

