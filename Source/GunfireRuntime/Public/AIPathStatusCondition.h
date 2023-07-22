#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "Condition.h"
#include "AIPathStatusCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIPathStatusCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPathFollowingStatus::Type> Status;
    
public:
    UAIPathStatusCondition();
};

