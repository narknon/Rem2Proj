#pragma once
#include "CoreMinimal.h"
#include "PersistenceKey.h"
#include "PersistentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPersistentReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPersistenceKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CachedActor;
    
public:
    GUNFIRESAVESYSTEM_API FPersistentReference();
};

