#include "ContextualDialogComponent.h"

void UContextualDialogComponent::TriggerDialogResponseInProximity(const UObject* WorldContextObject, const FVector& Location, float Radius, FName DialogResponse) {
}

bool UContextualDialogComponent::TriggerDialogResponse(FName Trigger) {
    return false;
}

void UContextualDialogComponent::ServerTriggerDialogResponse_Implementation(FName Trigger) {
}
bool UContextualDialogComponent::ServerTriggerDialogResponse_Validate(FName Trigger) {
    return true;
}

void UContextualDialogComponent::OnNotifyTakeDamage(const FDamageInfo& DamageInfo) {
}

void UContextualDialogComponent::OnNotifyHit(const FDamageInfo& DamageInfo) {
}

void UContextualDialogComponent::OnEvent(FName EventName) {
}

void UContextualDialogComponent::OnDialogComplete(UDialogInstance* Instance) {
}

void UContextualDialogComponent::MulticastDialog_Implementation(FDialogInfo Dialog) {
}

AActor* UContextualDialogComponent::GetContextOwner_Implementation() {
    return NULL;
}

void UContextualDialogComponent::EventEnd() {
}

UContextualDialogComponent::UContextualDialogComponent() {
    this->DialogSet = NULL;
    this->DialogTree = NULL;
}

