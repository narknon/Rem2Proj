#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "BlueprintStateDecorator.generated.h"

class AActor;
class UActorState;
class UStateMachineComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UBlueprintStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UBlueprintStateDecorator();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnValidate(UStateMachineComponent* StateMachine, AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(UStateMachineComponent* StateMachine, UActorState* NextState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter(UStateMachineComponent* StateMachine, UActorState* PrevState) const;
    
};

