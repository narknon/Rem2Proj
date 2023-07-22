#pragma once
#include "CoreMinimal.h"
#include "SkyboxModifierVolumeInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSkyboxModifierVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayersInVolume;
    
    REMNANT_API FSkyboxModifierVolumeInfo();
};

