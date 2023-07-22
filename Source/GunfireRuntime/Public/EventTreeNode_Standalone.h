#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode.h"
#include "EventTreeNode_Standalone.generated.h"

class AActor;
class UEventTreeComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEventTreeNode_Standalone : public UEventTreeNode {
    GENERATED_BODY()
public:
    UEventTreeNode_Standalone();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    void BeginStandalone(UEventTreeComponent* Component, AActor* Instigator) const;
    
};

