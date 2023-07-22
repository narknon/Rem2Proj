#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AccountCurrencyInstance.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FAccountCurrencyInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    REMNANT_API FAccountCurrencyInstance();
};

