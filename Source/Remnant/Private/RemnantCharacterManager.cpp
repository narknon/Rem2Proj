#include "RemnantCharacterManager.h"
#include "Templates/SubclassOf.h"

bool URemnantCharacterManager::ShouldAwardHardcoreRewards(const UObject* WorldContextObject) {
    return false;
}

bool URemnantCharacterManager::SetActiveCharacter(int32 ID) {
    return false;
}

bool URemnantCharacterManager::RestoreCharacters() {
    return false;
}

bool URemnantCharacterManager::ResolvePendingExit() {
    return false;
}

bool URemnantCharacterManager::IsHardcore(const UObject* WorldContextObject) {
    return false;
}

bool URemnantCharacterManager::IsDeceasedCharacter(const UObject* WorldContextObject) {
    return false;
}

bool URemnantCharacterManager::HasBackupCharacters() const {
    return false;
}

bool URemnantCharacterManager::HasActiveCharacter() {
    return false;
}

TArray<USavedCharacter*> URemnantCharacterManager::GetTransientCharacters() {
    return TArray<USavedCharacter*>();
}

int32 URemnantCharacterManager::GetMaxCharacterCount() {
    return 0;
}

TArray<USavedCharacter*> URemnantCharacterManager::GetCharacters() {
    return TArray<USavedCharacter*>();
}

URemnantCharacterManager* URemnantCharacterManager::GetCharacterManager(const UObject* WorldContextObject) {
    return NULL;
}

USavedCharacter* URemnantCharacterManager::GetCharacterInfo(const APlayerController* Controller) {
    return NULL;
}

int32 URemnantCharacterManager::GetCharacterCount() {
    return 0;
}

USavedCharacter* URemnantCharacterManager::GetCharacterAt(int32 Index) {
    return NULL;
}

USavedCharacter* URemnantCharacterManager::GetCharacter(int32 ID) {
    return NULL;
}

void URemnantCharacterManager::GetActiveEquipmentVisuals(USavedCharacter* CharacterInfo, TArray<TSubclassOf<AItem>>& OutVisuals, TArray<uint8>& OutLevels, TArray<TSubclassOf<AItem>>& OutSkins) {
}

USavedCharacter* URemnantCharacterManager::GetActiveCharacter() {
    return NULL;
}

bool URemnantCharacterManager::DeleteTransientCharacters() {
    return false;
}

bool URemnantCharacterManager::DeleteTransientCharacter(int32 ID) {
    return false;
}

bool URemnantCharacterManager::DeleteCharacter(int32 ID) {
    return false;
}

USavedCharacter* URemnantCharacterManager::CreateTransientCharacter(const FString& Name, TSubclassOf<USavedCharacter> SaveGameClass, int32& ErrorCode, bool SetActive, ERemnantCharacterType CharacterType, bool ShouldSkipIntro, TSoftClassPtr<URemnantArchetype> Archetype, TSoftClassPtr<URemnantArchetype> SecondaryArchetype, int32 StartingDifficulty, USavedCharacter* ReferenceCharacter, const TArray<TSubclassOf<UAccountAward>>& AllowedAccountAwards) {
    return NULL;
}

USavedCharacter* URemnantCharacterManager::CreateCharacter(const FString& Name, TSubclassOf<USavedCharacter> SaveGameClass, int32& ErrorCode, bool SetActive, ERemnantCharacterType CharacterType, bool ShouldSkipIntro, TSoftClassPtr<URemnantArchetype> Archetype, TSoftClassPtr<URemnantArchetype> SecondaryArchetype, int32 StartingDifficulty) {
    return NULL;
}

URemnantCharacterManager::URemnantCharacterManager() {
}

