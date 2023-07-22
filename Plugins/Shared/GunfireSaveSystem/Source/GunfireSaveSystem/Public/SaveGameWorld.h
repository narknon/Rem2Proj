#pragma once
#include "CoreMinimal.h"
#include "SaveGamePersistence.h"
#include "SaveGameWorld.generated.h"

class UPersistenceContainer;

UCLASS(Blueprintable)
class GUNFIRESAVESYSTEM_API USaveGameWorld : public USaveGamePersistence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool RequiresFullGame;
    
protected:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 UniqueIDGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UPersistenceContainer*> Containers;
    
public:
    USaveGameWorld();
};

