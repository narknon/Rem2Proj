#pragma once
#include "CoreMinimal.h"
#include "ItemGenerator.h"
#include "ItemGeneratorItem.generated.h"

class AItem;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UItemGeneratorItem : public UItemGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QuantityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QuantityMax;
    
    UItemGeneratorItem();
};

