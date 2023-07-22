#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PersistenceBlob.h"
#include "PersistenceContainer.generated.h"

UCLASS(Blueprintable)
class GUNFIRESAVESYSTEM_API UPersistenceContainer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPersistenceBlob Blob;
    
public:
    UPersistenceContainer();
};

