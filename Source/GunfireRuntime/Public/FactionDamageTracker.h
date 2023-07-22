#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FactionDamageTracker.generated.h"

class UFaction;

USTRUCT(BlueprintType)
struct FFactionDamageTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercent;
    
    GUNFIRERUNTIME_API FFactionDamageTracker();
};

