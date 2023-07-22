#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "NavMeshTestCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UNavMeshTestCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UNavMeshTestCondition();
};

