#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EntitlementInstance.generated.h"

class UAccountAward;
class UEntitlementType;

USTRUCT(BlueprintType)
struct FEntitlementInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAccountAward> AccountAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntitlementType> Entitlement;
    
    REMNANT_API FEntitlementInstance();
};

