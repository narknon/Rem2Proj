#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Branch.h"
#include "EventTreeNode_RandomBranch.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_RandomBranch : public UEventTreeNode_Branch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSeed;
    
public:
    UEventTreeNode_RandomBranch();
};

