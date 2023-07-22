#include "AICharacter.h"
#include "Net/UnrealNetwork.h"

void AAICharacter::OnRep_CurrentPOIAnimTags() {
}

void AAICharacter::DifficultyChanged() {
}

void AAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAICharacter, CurrentPOIAnimationTags);
}

AAICharacter::AAICharacter() {
    this->Blackboard = NULL;
    this->SpawnPath = NULL;
    this->PatrolPath = NULL;
    this->PerceptionScalar = 1.00f;
    this->CombatClass = NULL;
    this->NoDamageWhenNotPlayerVisible = false;
    this->NoDamageWhenNotPlayerDamageScalar = 0.01f;
    this->NoDamageWhenNotPlayerVisibleMaxRange = 2000.00f;
}

