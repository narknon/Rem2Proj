#pragma once
#include "CoreMinimal.h"
#include "EAudioPlaybackTypes.generated.h"

UENUM(BlueprintType)
enum class EAudioPlaybackTypes : uint8 {
    None,
    OneShot,
    Looping,
};

