#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "PlayStateEffect.generated.h"

class UPlayStateComponent;
class UPlayStateEffect;

UCLASS(Abstract, Blueprintable, Const, DefaultToInstanced, EditInlineNew)
class GUNFIRERUNTIME_API UPlayStateEffect : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPlayStateEffect();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TickTransition(UPlayStateComponent* Component, float DeltaSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetEditorLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Apply(UPlayStateComponent* Component, const UPlayStateEffect* Previous) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

