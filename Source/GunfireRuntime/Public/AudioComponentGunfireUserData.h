#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "OnGunfireAudioFinishedNativeDelegate.h"
#include "AudioComponentGunfireUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UAudioComponentGunfireUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunfireAudioFinishedNative OnAudioFinished;
    
    UAudioComponentGunfireUserData();
};

