#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnPrerequisites.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpawnPrerequisites {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NumLoadedQuestsRequired;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NumReadyQuestsRequired;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NumReadyZonesRequired;
    
    REMNANT_API FPlayerSpawnPrerequisites();
};

