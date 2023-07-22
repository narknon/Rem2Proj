#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EntitlementRequirements.generated.h"

class UEntitlementType;

USTRUCT(BlueprintType)
struct FEntitlementRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEntitlementType>> Entitlements;
    
    REMNANT_API FEntitlementRequirements();
};

