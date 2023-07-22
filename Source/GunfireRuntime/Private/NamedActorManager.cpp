#include "NamedActorManager.h"

void UNamedActorManager::RemoveActor(const FName& NameID, AActor* Actor) {
}

UNamedActorManager* UNamedActorManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UNamedActorManager::FindActorsByTags(const UObject* WorldContextObject, const TArray<FName>& Tags, TArray<AActor*>& Actors) {
}

AActor* UNamedActorManager::FindActorByName(const UObject* WorldContextObject, FName NameID) {
    return NULL;
}

void UNamedActorManager::AddActor(const FName& NameID, AActor* Actor) {
}

UNamedActorManager::UNamedActorManager() {
}

