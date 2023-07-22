#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Base.h"
#include "EventTreeNode.generated.h"

class APlayerController;
class UEventTreeComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode : public UEventTreeNode_Base {
    GENERATED_BODY()
public:
    UEventTreeNode();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Validate(UEventTreeComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Loop(UEventTreeComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Join(UEventTreeComponent* Component, APlayerController* JoiningController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsComplete(UEventTreeComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void End(UEventTreeComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Begin(UEventTreeComponent* Component) const;
    
};

