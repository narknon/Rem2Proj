#include "PersistenceBlueprintFunctionLibrary.h"

void UPersistenceBlueprintFunctionLibrary::SetReference(FPersistentReference& Reference, AActor* InActor) {
}

void UPersistenceBlueprintFunctionLibrary::SetDisableCommit(const UObject* WorldContextObject, bool DisableCommit) {
}

AActor* UPersistenceBlueprintFunctionLibrary::GetReference(const UObject* WorldContextObject, FPersistentReference& Reference) {
    return NULL;
}

USaveGameProfile* UPersistenceBlueprintFunctionLibrary::GetProfileSave(const UObject* WorldContextObject) {
    return NULL;
}

UPersistenceManager* UPersistenceBlueprintFunctionLibrary::GetPersistenceManager(const UObject* WorldContextObject) {
    return NULL;
}

USaveGameWorld* UPersistenceBlueprintFunctionLibrary::GetCurrentSave(const UObject* WorldContextObject) {
    return NULL;
}

void UPersistenceBlueprintFunctionLibrary::CopyReference(const FPersistentReference& From, FPersistentReference& To) {
}

void UPersistenceBlueprintFunctionLibrary::CommitSave(const UObject* WorldContextObject, const FString& Reason) {
}

void UPersistenceBlueprintFunctionLibrary::ClearReference(FPersistentReference& Reference) {
}

UPersistenceBlueprintFunctionLibrary::UPersistenceBlueprintFunctionLibrary() {
}

