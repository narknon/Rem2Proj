#include "ProgressionComponent.h"
#include "Net/UnrealNetwork.h"

bool UProgressionComponent::SetLevel(int32 LevelToSet) {
    return false;
}

void UProgressionComponent::OnRep_Level() {
}

void UProgressionComponent::OnRep_Experience() {
}

void UProgressionComponent::OnComputeStats() {
}

float UProgressionComponent::GetPercentageToNextLevel() {
    return 0.0f;
}

int32 UProgressionComponent::GetExperienceTowardsNextLevel() {
    return 0;
}

int32 UProgressionComponent::GetExperienceToNextLevel() {
    return 0;
}

void UProgressionComponent::CommitQueuedExperience() {
}

void UProgressionComponent::ClearQueuedExperience() {
}

void UProgressionComponent::AddExperience(int32 ExperienceToAdd, EExperienceReason Reason, int32 ExperienceLevel) {
}

void UProgressionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProgressionComponent, Level);
    DOREPLIFETIME(UProgressionComponent, Experience);
    DOREPLIFETIME(UProgressionComponent, QueuedExperience);
}

UProgressionComponent::UProgressionComponent() {
    this->ExperienceTable = NULL;
    this->StartingLevel = 1;
    this->RequiredExperience = 500.00f;
    this->RequiredExperienceInc = 500.00f;
    this->RequiredExperienceExp = 1.00f;
    this->RequiredExperienceRound = 100;
    this->IncomingExperienceScalar = 1.00f;
    this->MaxLevel = 50;
    this->Level = 1;
    this->Experience = 0;
    this->QueuedExperience = 0;
    this->AutoAcquireExperience = true;
    this->QueueExperience = false;
    this->SharedExperience = true;
    this->SharedExperienceRange = 4000.00f;
    this->StopExpGainAtMaxLevel = true;
}

