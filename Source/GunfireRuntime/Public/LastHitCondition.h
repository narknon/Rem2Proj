#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "LastHitCondition.generated.h"

class UDamageClass;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULastHitCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageClass>> DamageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPower;
    
public:
    ULastHitCondition();
};

