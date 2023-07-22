#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGamePersistence.generated.h"

class UPersistenceManager;

UCLASS(Abstract, Blueprintable)
class GUNFIRESAVESYSTEM_API USaveGamePersistence : public USaveGame {
    GENERATED_BODY()
public:
    USaveGamePersistence();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreCommit(UPersistenceManager* PersistenceManager);
    
};

