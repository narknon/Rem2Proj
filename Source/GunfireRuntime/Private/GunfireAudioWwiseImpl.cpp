#include "GunfireAudioWwiseImpl.h"

void UGunfireAudioWwiseImpl::UnregisterForDoppler(int64 GameObjectId, int32 PlayingID) {
}



bool UGunfireAudioWwiseImpl::SetSwitchForGameObjectId(int64 GameObjectId, FName Group, FName State) {
    return false;
}

bool UGunfireAudioWwiseImpl::SetSwitchByIdForGameObjectId(int64 GameObjectId, int32 GroupShortID, int32 StateShortId) {
    return false;
}



void UGunfireAudioWwiseImpl::RegisterForDoppler(int64 GameObjectId, int32 PlayingID, FName RTPCName) {
}











FAudioComponentGunfire UGunfireAudioWwiseImpl::GetAudioComponentByGameObjectId(int64 GameObjectId) {
    return FAudioComponentGunfire{};
}

UGunfireAudioWwiseImpl::UGunfireAudioWwiseImpl() {
}

