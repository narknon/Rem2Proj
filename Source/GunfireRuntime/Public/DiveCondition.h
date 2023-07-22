#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "DiveCondition.generated.h"

class UPhysicsBoundsType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDiveCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPhysicsBoundsType>> Types;
    
public:
    UDiveCondition();
};

