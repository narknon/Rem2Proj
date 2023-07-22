#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ShowLastUsedItem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class REMNANT_API UAnimNotify_ShowLastUsedItem : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowItem;
    
public:
    UAnimNotify_ShowLastUsedItem();
};

