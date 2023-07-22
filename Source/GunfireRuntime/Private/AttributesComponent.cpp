#include "AttributesComponent.h"
#include "Net/UnrealNetwork.h"

void UAttributesComponent::SetAttributePoints(int32 AvailablePoints) {
}

bool UAttributesComponent::SetAttributeLevel(const FName& ID, int32 LevelToSet) {
    return false;
}

void UAttributesComponent::PreviewIncreaseAttribute(const FName& ID) {
}

void UAttributesComponent::PreviewDecreaseAttribute(const FName& ID) {
}

void UAttributesComponent::PreviewCommit() {
}

void UAttributesComponent::OnRep_Attributes() {
}

void UAttributesComponent::OnLevelUp() {
}

void UAttributesComponent::OnComputeStats() {
}

void UAttributesComponent::OnComputeDerivedStats() {
}

bool UAttributesComponent::IsPreviewing() {
    return false;
}

void UAttributesComponent::IncreaseAttribute_Implementation(const FName& ID) {
}
bool UAttributesComponent::IncreaseAttribute_Validate(const FName& ID) {
    return true;
}

float UAttributesComponent::GetPreviewStatValue(const FName& Stat, bool ApplyMod) {
    return 0.0f;
}

int32 UAttributesComponent::GetPreviewAvailableAttributePoints() {
    return 0;
}

int32 UAttributesComponent::GetPreviewAttributeLevel(const FName& ID) {
    return 0;
}

int32 UAttributesComponent::GetAvailableAttributePoints() {
    return 0;
}

int32 UAttributesComponent::GetAttributeLevel(const FName& ID) {
    return 0;
}

int32 UAttributesComponent::GetAttributeCost(const FName& ID) {
    return 0;
}

FAttribute UAttributesComponent::GetAttributeByID(const FName& ID) {
    return FAttribute{};
}

void UAttributesComponent::EndPreview() {
}

void UAttributesComponent::BeginPreview() {
}

void UAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributesComponent, AttributeLevels);
    DOREPLIFETIME(UAttributesComponent, AttributePoints);
    DOREPLIFETIME(UAttributesComponent, AttributePointsSpent);
}

UAttributesComponent::UAttributesComponent() {
    this->AttributePointsPerLevel = 0;
    this->AttributePoints = 0;
    this->AttributePointsSpent = 0;
    this->AttributePointsStats = NULL;
    this->PreviewAttributePointsSpent = 0;
}

