#pragma once
#include "CoreMinimal.h"
#include "AutoUpgradeableItem.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FAutoUpgradeableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUpgrades;
    
    GUNFIRERUNTIME_API FAutoUpgradeableItem();
};

