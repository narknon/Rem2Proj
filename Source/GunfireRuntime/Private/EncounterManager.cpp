#include "EncounterManager.h"

void UEncounterManager::StopEncounter(int32 encounterid) {
}

void UEncounterManager::StopAllEncountersForOwner(AActor* Owner, bool DestroyActiveSpawns) {
}

void UEncounterManager::ResumeEncounter(int32 encounterid) {
}

void UEncounterManager::PauseEncounter(int32 encounterid) {
}

void UEncounterManager::OnSpawnDestroyed(AActor* DestroyedActor) {
}

void UEncounterManager::OnNotifyDead(const FDamageInfo& DamageInfo) {
}

void UEncounterManager::MulticastSpawnAudio_Implementation(FSoundGunfire SpawnAudio, const FVector_NetQuantize& Location) {
}

bool UEncounterManager::IsFullyExplored() {
    return false;
}

bool UEncounterManager::IsComplete(int32 encounterid) {
    return false;
}

int32 UEncounterManager::GetNumSpawnsForOwner(AActor* Owner, bool IncludeQueuedSpawns) {
    return 0;
}

int32 UEncounterManager::GetNumEncountersForOwner(AActor* Owner, bool WithQueuedSpawnsOnly, bool MatchAggroGroup) {
    return 0;
}

int32 UEncounterManager::GetFrontTileID() {
    return 0;
}

int32 UEncounterManager::GetCurrentTileID() {
    return 0;
}

int32 UEncounterManager::GetBehindTileID() {
    return 0;
}

UEncounterInstance* UEncounterManager::DoEncounter(USpawnTable* SpawnTable, int32 Level, int32 Rating, const TArray<FName>& Tags, AActor* Target, int32 Flags) {
    return NULL;
}

UEncounterManager::UEncounterManager() {
}

