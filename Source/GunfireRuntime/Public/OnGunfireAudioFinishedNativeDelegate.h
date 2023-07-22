#pragma once
#include "CoreMinimal.h"
#include "GunfireAudioPlayingID.h"
#include "OnGunfireAudioFinishedNativeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGunfireAudioFinishedNative, FGunfireAudioPlayingID, PlayingID, int32, ErrorCode);

