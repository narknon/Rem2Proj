#pragma once
#include "CoreMinimal.h"
#include "GunfireAudioPlayingID.h"
#include "OnGunfireAudioFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGunfireAudioFinished, FGunfireAudioPlayingID, PlayingID, int32, ErrorCode);

