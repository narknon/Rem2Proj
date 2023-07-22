#pragma once
#include "CoreMinimal.h"
#include "EMusicIntensity.h"
#include "MusicIntensityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMusicIntensityDelegate, EMusicIntensity, Intensity);

