#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PersistentReference.h"
#include "PersistenceBlueprintFunctionLibrary.generated.h"

class AActor;
class UObject;
class UPersistenceManager;
class USaveGameProfile;
class USaveGameWorld;

UCLASS(Blueprintable)
class GUNFIRESAVESYSTEM_API UPersistenceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPersistenceBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetReference(UPARAM(Ref) FPersistentReference& Reference, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDisableCommit(const UObject* WorldContextObject, bool DisableCommit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetReference(const UObject* WorldContextObject, UPARAM(Ref) FPersistentReference& Reference);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USaveGameProfile* GetProfileSave(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPersistenceManager* GetPersistenceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USaveGameWorld* GetCurrentSave(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CopyReference(const FPersistentReference& From, UPARAM(Ref) FPersistentReference& To);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CommitSave(const UObject* WorldContextObject, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ClearReference(UPARAM(Ref) FPersistentReference& Reference);
    
};

