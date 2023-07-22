#pragma once
#include "CoreMinimal.h"
#include "EntitlementRequirements.h"
#include "Templates/SubclassOf.h"
#include "ItemEntitlement.generated.h"

class UItemAward;

USTRUCT(BlueprintType)
struct FItemEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemAward> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRevoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementRequirements Requirements;
    
    REMNANT_API FItemEntitlement();
};

