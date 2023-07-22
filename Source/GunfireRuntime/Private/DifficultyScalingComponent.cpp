#include "DifficultyScalingComponent.h"
#include "Net/UnrealNetwork.h"

void UDifficultyScalingComponent::SetNumPlayers(int32 NewNumPlayers) {
}

void UDifficultyScalingComponent::SetLevelOverride(int32 NewLevel) {
}

void UDifficultyScalingComponent::SetDifficultyScalingTableOverride(UDataTable* Table) {
}

void UDifficultyScalingComponent::SetDifficulty(int32 NewDifficulty) {
}

void UDifficultyScalingComponent::RemoveExternalStatModifier(FName Stat) {
}

void UDifficultyScalingComponent::Invalidate() {
}

float UDifficultyScalingComponent::GetSpawnQuantityScalar() {
    return 0.0f;
}

float UDifficultyScalingComponent::GetPlayerStatusDamageScalar() {
    return 0.0f;
}

float UDifficultyScalingComponent::GetPlayerBlightBuildUpScalar() {
    return 0.0f;
}

int32 UDifficultyScalingComponent::GetNumPlayers() {
    return 0;
}

int32 UDifficultyScalingComponent::GetLevelForActor(AActor* Actor) {
    return 0;
}

int32 UDifficultyScalingComponent::GetLevel(AActor* Actor) {
    return 0;
}

int32 UDifficultyScalingComponent::GetItemLevelForActor(AActor* Actor) {
    return 0;
}

int32 UDifficultyScalingComponent::GetItemLevel(AActor* Actor) {
    return 0;
}

float UDifficultyScalingComponent::GetExperienceScalar(AActor* Actor) {
    return 0.0f;
}

float UDifficultyScalingComponent::GetEnemyHealthScalar(AActor* Actor, FName Prefix) {
    return 0.0f;
}

float UDifficultyScalingComponent::GetEnemyDamageScalar(AActor* Actor, FName Prefix) {
    return 0.0f;
}

UDifficultyScalingComponent* UDifficultyScalingComponent::GetDifficultyScalingComponent(const UObject* WorldContextObject) {
    return NULL;
}

int32 UDifficultyScalingComponent::GetDifficulty() const {
    return 0;
}

float UDifficultyScalingComponent::GetCurrencyScalar(AActor* Actor) {
    return 0.0f;
}

void UDifficultyScalingComponent::ComputeStats() {
}

void UDifficultyScalingComponent::ClearExternalStatModifiers() {
}

void UDifficultyScalingComponent::ClearDifficultyScalingTableOverride() {
}

void UDifficultyScalingComponent::AddExternalStatModifier(FName Stat, float Value) {
}

void UDifficultyScalingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDifficultyScalingComponent, NumPlayers);
    DOREPLIFETIME(UDifficultyScalingComponent, LevelOverride);
    DOREPLIFETIME(UDifficultyScalingComponent, Difficulty);
}

UDifficultyScalingComponent::UDifficultyScalingComponent() {
    this->NumPlayersScalingTable = NULL;
    this->LevelScalingTable = NULL;
    this->DifficultyScalingTable = NULL;
    this->NumPlayers = 0;
    this->LevelOverride = -1;
    this->Difficulty = 1;
    this->OverrideDifficultyScalingTable = NULL;
}

