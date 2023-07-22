#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Branch.h"
#include "EventTreeNode_Switch.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_Switch : public UEventTreeNode_Branch {
    GENERATED_BODY()
public:
    UEventTreeNode_Switch();
};

