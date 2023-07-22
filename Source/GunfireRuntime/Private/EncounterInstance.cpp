#include "EncounterInstance.h"

void UEncounterInstance::StopEncounter(bool DestroyActiveSpawns) {
}

void UEncounterInstance::SetAggroGroup(FName NewAggroGroup) {
}

void UEncounterInstance::ResumeEncounter() {
}

void UEncounterInstance::PauseEncounter() {
}

int32 UEncounterInstance::NumQueuedSpawns() {
    return 0;
}

int32 UEncounterInstance::NumActiveSpawns() {
    return 0;
}

bool UEncounterInstance::IsComplete() {
    return false;
}

void UEncounterInstance::InvokeEventOnActors(FName EventName) {
}

TArray<AActor*> UEncounterInstance::GetSpawnedActors() {
    return TArray<AActor*>();
}

UEncounterInstance::UEncounterInstance() {
    this->EncounterManager = NULL;
    this->NumSpawned = 0;
    this->Counter = 0.00f;
    this->Streaming = false;
    this->Paused = false;
    this->PerpetualSpawnCount = -1;
}

