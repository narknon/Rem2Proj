#pragma once
#include "CoreMinimal.h"
#include "EAffiliation.h"
#include "Templates/SubclassOf.h"
#include "FactionOverride.generated.h"

class UFaction;

USTRUCT(BlueprintType)
struct FFactionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EAffiliation Affiliation;
    
    GUNFIRERUNTIME_API FFactionOverride();
};

