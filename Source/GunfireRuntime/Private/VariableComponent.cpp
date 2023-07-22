#include "VariableComponent.h"

void UVariableComponent::SetVariableName(const FName& NameID, FName Value, float Expiration) {
}

void UVariableComponent::SetVariableInt(const FName& NameID, int32 Value, float Expiration) {
}

void UVariableComponent::SetVariableFloat(const FName& NameID, float Value, float Expiration) {
}

void UVariableComponent::SetVariableBool(const FName& NameID, bool Value, float Expiration) {
}

FName UVariableComponent::GetVariableName(const FName& NameID) {
    return NAME_None;
}

int32 UVariableComponent::GetVariableInt(const FName& NameID) {
    return 0;
}

float UVariableComponent::GetVariableFloat(const FName& NameID) {
    return 0.0f;
}

bool UVariableComponent::GetVariableBool(const FName& NameID) {
    return false;
}

bool UVariableComponent::EvaluateStatements(AActor* ContextActor, const FVariableStatements& Statements) {
    return false;
}

UVariableComponent::UVariableComponent() {
    this->VariableDefinitions = NULL;
    this->RegisterOwnerVariables = true;
    this->DummyVar = false;
}

