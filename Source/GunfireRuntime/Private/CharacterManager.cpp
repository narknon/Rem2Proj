#include "CharacterManager.h"

void UCharacterManager::KillAllCharactersForOwner(AActor* Owner) {
}

bool UCharacterManager::IsCharacterTargeted(AActor* Target) {
    return false;
}

UCharacterManager* UCharacterManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ACharacterGunfire*> UCharacterManager::GetCharactersTargetingActor(AActor* Target) {
    return TArray<ACharacterGunfire*>();
}

TArray<ACharacterGunfire*> UCharacterManager::GetCharactersOnBaseComponent(UPrimitiveComponent* Base) {
    return TArray<ACharacterGunfire*>();
}

TArray<ACharacterGunfire*> UCharacterManager::GetCharactersOnBaseActor(AActor* Base) {
    return TArray<ACharacterGunfire*>();
}

TArray<ACharacterGunfire*> UCharacterManager::GetCharactersInAggroGroup(FName AggroGroup) {
    return TArray<ACharacterGunfire*>();
}

TArray<ACharacterGunfire*> UCharacterManager::GetCharactersForOwner(AActor* Owner) {
    return TArray<ACharacterGunfire*>();
}

void UCharacterManager::DestroyAllCharactersForOwner(AActor* Owner) {
}

void UCharacterManager::ActivateCharactersOnSegment(const FVector& From, const FVector& To, bool bBonesOnly) {
}

void UCharacterManager::ActivateCharactersInSphere(const FVector& Origin, float Radius, bool bBonesOnly) {
}

UCharacterManager::UCharacterManager() {
    this->TickManager = NULL;
}

