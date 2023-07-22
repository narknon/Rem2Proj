#pragma once
#include "CoreMinimal.h"
#include "EventRegionCharacter.generated.h"

class APlayerController;
class ARemnantCharacter;

USTRUCT(BlueprintType)
struct REMNANT_API FEventRegionCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARemnantCharacter* Character;
    
    FEventRegionCharacter();
};

