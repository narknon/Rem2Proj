#include "SpawnPointBase.h"
#include "Templates/SubclassOf.h"

void ASpawnPointBase::Warp(AActor* Actor) {
}

AActor* ASpawnPointBase::SpawnActor(TSubclassOf<AActor> ActorClass, bool SpawnInRoot) {
    return NULL;
}

void ASpawnPointBase::QueueSpawnActor(TSubclassOf<AActor> ActorClass, AActor* OwningActor, bool SpawnInRoot) {
}

void ASpawnPointBase::PreSpawn(AActor* Actor) {
}

void ASpawnPointBase::PostSpawn(AActor* Actor) {
}



void ASpawnPointBase::NotifySpawnComplete_Implementation(AActor* Actor) {
}

void ASpawnPointBase::FinishSpawn(AActor* Actor) {
}

AActor* ASpawnPointBase::BeginSpawn(AActor* OwningActor, TSubclassOf<AActor> ActorClass, bool SpawnInRoot) {
    return NULL;
}

ASpawnPointBase::ASpawnPointBase() {
}

