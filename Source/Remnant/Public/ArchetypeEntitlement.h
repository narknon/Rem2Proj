#pragma once
#include "CoreMinimal.h"
#include "EntitlementRequirements.h"
#include "Templates/SubclassOf.h"
#include "ArchetypeEntitlement.generated.h"

class UArchetypeAward;

USTRUCT(BlueprintType)
struct FArchetypeEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArchetypeAward> Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementRequirements Requirements;
    
    REMNANT_API FArchetypeEntitlement();
};

