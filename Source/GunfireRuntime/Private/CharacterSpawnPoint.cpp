#include "CharacterSpawnPoint.h"
#include "Components/CapsuleComponent.h"
#include "Templates/SubclassOf.h"

void ACharacterSpawnPoint::Spawn(bool bUseDeferredOptimization) {
}

void ACharacterSpawnPoint::ResetSpawn(bool DestroySpawnedActors) {
}


void ACharacterSpawnPoint::OnCharacterDestroyed(AActor* DestroyedActor) {
}

void ACharacterSpawnPoint::OnCharacterDead(uint8 Reason, ACharacterGunfire* Character, AActor* Cause) {
}

int32 ACharacterSpawnPoint::GetNumAliveSpawns() {
    return 0;
}

TSubclassOf<ACharacterGunfire> ACharacterSpawnPoint::GetEnemyTypeOverride_Implementation() {
    return NULL;
}

bool ACharacterSpawnPoint::CanSpawnFromDelay_Implementation() {
    return false;
}

bool ACharacterSpawnPoint::CanSpawn() const {
    return false;
}

ACharacterSpawnPoint::ACharacterSpawnPoint() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterMeshCapsule"));
    this->EnemyType = NULL;
    this->SpawnDelayMin = 0.00f;
    this->SpawnDelayMax = 0.00f;
    this->PerceptionScalar = 1.00f;
    this->PatrolPath = NULL;
    this->SpawnPath = NULL;
    this->bApplyThreat = false;
    this->ThreatToApply = 1.00f;
    this->bUsesDeferredSpawnOptimization = true;
    this->SpawnedCharacter = NULL;
    this->bUseEditorVisuals = true;
    this->SpawnPointManager = NULL;
}

