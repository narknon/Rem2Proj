#pragma once
#include "CoreMinimal.h"
#include "RegisteredEntity.generated.h"

class AActor;
class UUserWidget;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FRegisteredEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    FRegisteredEntity();
};

