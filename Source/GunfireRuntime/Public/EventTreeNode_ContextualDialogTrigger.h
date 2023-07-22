#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode.h"
#include "EventTreeNode_ContextualDialogTrigger.generated.h"

class UBranch_ContextualDialogEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_ContextualDialogTrigger : public UEventTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBranch_ContextualDialogEntry*> Entries;
    
    UEventTreeNode_ContextualDialogTrigger();
};

