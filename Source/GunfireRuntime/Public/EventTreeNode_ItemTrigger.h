#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_ManualTrigger.h"
#include "EventTreeNode_ItemTrigger.generated.h"

class AItem;

UCLASS(Blueprintable)
class UEventTreeNode_ItemTrigger : public UEventTreeNode_ManualTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemBP;
    
    UEventTreeNode_ItemTrigger();
};

