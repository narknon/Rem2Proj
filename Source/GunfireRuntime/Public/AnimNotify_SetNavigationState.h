#pragma once
#include "CoreMinimal.h"
#include "ENavigationType.h"
#include "StateTransientAnimNotify.h"
#include "AnimNotify_SetNavigationState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_SetNavigationState : public UStateTransientAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationType NavType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStateTransient;
    
public:
    UAnimNotify_SetNavigationState();
};

