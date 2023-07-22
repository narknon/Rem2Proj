#pragma once
#include "CoreMinimal.h"
#include "GunfireMusicState.h"
#include "GunfireMusicStinger.h"
#include "MusicSetAsset.h"
#include "GunfireMusicSetAsset.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGunfireMusicSetAsset : public UMusicSetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGunfireMusicState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGunfireMusicStinger> Stingers;
    
    UGunfireMusicSetAsset();
};

