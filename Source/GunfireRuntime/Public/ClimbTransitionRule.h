#pragma once
#include "CoreMinimal.h"
#include "ClimbTransition.h"
#include "ECanClimbFilterMethod.h"
#include "ClimbTransitionRule.generated.h"

USTRUCT(BlueprintType)
struct FClimbTransitionRule : public FClimbTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECanClimbFilterMethod Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClimbTransition> Prerequisites;
    
    GUNFIRERUNTIME_API FClimbTransitionRule();
};

