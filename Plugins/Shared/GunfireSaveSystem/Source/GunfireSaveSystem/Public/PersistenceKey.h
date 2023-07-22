#pragma once
#include "CoreMinimal.h"
#include "PersistenceKey.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRESAVESYSTEM_API FPersistenceKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ContainerKey;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 PersistentID;
    
    FPersistenceKey();
};

