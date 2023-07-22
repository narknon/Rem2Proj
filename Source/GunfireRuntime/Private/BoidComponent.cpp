#include "BoidComponent.h"
#include "Net/UnrealNetwork.h"

void UBoidComponent::Wander(float WanderRadius) {
}

void UBoidComponent::SetSpawnPoint(const FVector& NewSpawnPoint) {
}

void UBoidComponent::SetMoveType(EBoidMoveType NewMoveType) {
}

void UBoidComponent::SetGoalLocation(const FVector& NewGoalLocation, bool NewStopOnGoal, float NewGoalInnerRadius, float NewGoalOuterRadius, float NewGoalSeekBoost, float NewGoalSeekBoostZ) {
}

void UBoidComponent::SetGoalDirection(const FVector& NewDirection) {
}

void UBoidComponent::SetGoal(AActor* NewGoal, bool NewStopOnGoal, float NewGoalInnerRadius, float NewGoalOuterRadius, float NewGoalSeekBoost, float NewGoalSeekBoostZ) {
}

void UBoidComponent::SetFlapIntensity(float NewFlapIntensity) {
}

void UBoidComponent::SetEnabled(bool NewEnabled) {
}

void UBoidComponent::SetBoidSettings(const FBoidSettings& NewSettings) {
}

void UBoidComponent::ClearGoal() {
}

void UBoidComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBoidComponent, Flapping);
    DOREPLIFETIME(UBoidComponent, FlapIntensity);
}

UBoidComponent::UBoidComponent() {
    this->Enabled = true;
    this->World = NULL;
    this->NavMesh = NULL;
    this->NavData = NULL;
    this->BoidMovementComponent = NULL;
    this->MoveType = EBoidMoveType::Air;
    this->Flapping = false;
    this->FlapIntensity = 1.00f;
    this->GoalActor = NULL;
}

