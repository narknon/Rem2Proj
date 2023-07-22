#pragma once
#include "CoreMinimal.h"
#include "FloatUserSetting.h"
#include "AudioUserSetting.generated.h"

class USoundClass;

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UAudioUserSetting : public UFloatUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowBoostedVolume;
    
    UAudioUserSetting();
    UFUNCTION(BlueprintCallable)
    void SetSoundClassMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundClassMultiplier() const;
    
};

