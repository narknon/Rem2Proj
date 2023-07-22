#include "AkGameplayStaticsGunfire.h"

bool UAkGameplayStaticsGunfire::SetRTPCValueByPlayingId(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, int32 PlayingID, FName RTPC) {
    return false;
}

bool UAkGameplayStaticsGunfire::SetRTPCValueByGameObjectId(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, int64 GameObjectId, FName RTPC) {
    return false;
}

bool UAkGameplayStaticsGunfire::GetRTPCValueByPlayingId(UAkRtpc* RTPCValue, float& Value, int32 PlayingID, FName RTPC) {
    return false;
}

bool UAkGameplayStaticsGunfire::GetRTPCValueByGameObjectId(UAkRtpc* RTPCValue, float& Value, int64 GameObjectId, FName RTPC) {
    return false;
}

UAkGameplayStaticsGunfire::UAkGameplayStaticsGunfire() {
}

