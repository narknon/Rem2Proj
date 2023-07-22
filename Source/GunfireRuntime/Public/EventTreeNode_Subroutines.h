#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Branch.h"
#include "EventTreeNode_Subroutines.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_Subroutines : public UEventTreeNode_Branch {
    GENERATED_BODY()
public:
    UEventTreeNode_Subroutines();
};

