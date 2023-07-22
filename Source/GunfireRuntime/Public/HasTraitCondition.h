#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "HasTraitCondition.generated.h"

class UTrait;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasTraitCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredLevel;
    
public:
    UHasTraitCondition();
};

