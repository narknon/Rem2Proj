#include "StateMachine.h"

UActorState* UStateMachine::GetStateParent(UActorState* State) const {
    return NULL;
}

UActorState* UStateMachine::GetState(const FName& NameID) const {
    return NULL;
}

UActorState* UStateMachine::GetRootState(UActorState* State) const {
    return NULL;
}

UStateMachine::UStateMachine() {
    this->DefaultState = TEXT("Default");
}

