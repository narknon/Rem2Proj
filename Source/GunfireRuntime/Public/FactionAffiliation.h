#pragma once
#include "CoreMinimal.h"
#include "EAffiliation.h"
#include "Templates/SubclassOf.h"
#include "FactionAffiliation.generated.h"

class UFaction;

USTRUCT(BlueprintType)
struct FFactionAffiliation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> Faction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> Faction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAffiliation Affiliation;
    
    GUNFIRERUNTIME_API FFactionAffiliation();
};

