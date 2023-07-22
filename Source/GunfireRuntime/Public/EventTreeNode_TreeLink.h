#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode.h"
#include "EventTreeNode_TreeLink.generated.h"

class UEventTree;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_TreeLink : public UEventTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventTree* Tree;
    
    UEventTreeNode_TreeLink();
};

