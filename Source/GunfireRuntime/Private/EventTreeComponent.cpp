#include "EventTreeComponent.h"

void UEventTreeComponent::Stop() {
}

void UEventTreeComponent::StartTree() {
}

void UEventTreeComponent::SetStage(const FEventTreeStage& Stage) {
}

void UEventTreeComponent::SetContextActor(FName Name, AActor* Actor) {
}

void UEventTreeComponent::PushStage(const FEventTreeStage& Stage) {
}

void UEventTreeComponent::PopStage() {
}

UEventTreeNode* UEventTreeComponent::K2_PeekNextNode() const {
    return NULL;
}

UEventTreeNode* UEventTreeComponent::K2_GetCurrentNode() const {
    return NULL;
}

bool UEventTreeComponent::IsRunning() const {
    return false;
}

bool UEventTreeComponent::HasPendingEvents() const {
    return false;
}

TArray<AActor*> UEventTreeComponent::GetContextActors(FName Name) const {
    return TArray<AActor*>();
}

AActor* UEventTreeComponent::GetContextActor(FName Name) const {
    return NULL;
}

bool UEventTreeComponent::ExecuteTriggerFromEventTree(UEventTree* EventTree, const FName& TriggerName) {
    return false;
}

void UEventTreeComponent::ExecuteSubroutine(FName Name) {
}

void UEventTreeComponent::Clear(bool ForceComplete) {
}

void UEventTreeComponent::BeginEventTree(UEventTree* EventTree, bool DeferredStart) {
}

UEventTreeComponent::UEventTreeComponent() {
}

