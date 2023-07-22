#pragma once
#include "CoreMinimal.h"
#include "InspectStatBase.h"
#include "InspectStat.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FInspectStat : public FInspectStatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Context;
    
    GUNFIRERUNTIME_API FInspectStat();
};

