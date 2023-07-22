#include "BlueprintStateDecorator.h"

bool UBlueprintStateDecorator::OnValidate_Implementation(UStateMachineComponent* StateMachine, AActor* Actor) const {
    return false;
}



UBlueprintStateDecorator::UBlueprintStateDecorator() {
}

