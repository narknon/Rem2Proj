#pragma once
#include "CoreMinimal.h"
#include "ManagedActor.h"
#include "Checkpoint.generated.h"

class ARemnantCharacter;

UCLASS(Blueprintable)
class REMNANT_API ACheckpoint : public AManagedActor {
    GENERATED_BODY()
public:
    ACheckpoint();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionToMenu(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionFromMenu(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveTutorialPrompts(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgrade(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGrab(ARemnantCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginGrab(ARemnantCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndUseCheckpoint(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanCheckpointActivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginUseCheckpoint(ARemnantCharacter* Character, bool WasSummoned);
    
};

