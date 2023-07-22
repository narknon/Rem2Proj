#pragma once
#include "CoreMinimal.h"
#include "AccountAward.h"
#include "ItemAward.generated.h"

class AItem;

UCLASS(Blueprintable)
class REMNANT_API UItemAward : public UAccountAward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEquip;
    
    UItemAward();
};

