#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EYesNo.h"
#include "Templates/SubclassOf.h"
#include "HasItemByTypeCondition.generated.h"

class UItemType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasItemByTypeCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo Equipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYesNo InHand;
    
public:
    UHasItemByTypeCondition();
};

