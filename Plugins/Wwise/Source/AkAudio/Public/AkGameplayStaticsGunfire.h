#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkGameplayStaticsGunfire.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class AKAUDIO_API UAkGameplayStaticsGunfire : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStaticsGunfire();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool SetRTPCValueByPlayingId(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, int32 PlayingID, FName RTPC);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool SetRTPCValueByGameObjectId(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, int64 GameObjectId, FName RTPC);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool GetRTPCValueByPlayingId(UAkRtpc* RTPCValue, float& Value, int32 PlayingID, FName RTPC);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool GetRTPCValueByGameObjectId(UAkRtpc* RTPCValue, float& Value, int64 GameObjectId, FName RTPC);
    
};

