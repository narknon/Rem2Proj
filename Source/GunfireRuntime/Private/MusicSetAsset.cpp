#include "MusicSetAsset.h"

void UMusicSetAsset::Stop_Implementation(UMusicManager* MusicManager, FMusicSetInstanceData& InstanceData, const FName& StingerName) {
}

void UMusicSetAsset::SetState_Implementation(UMusicManager* MusicManager, FMusicSetInstanceData& InstanceData, EMusicState DesiredState) {
}

void UMusicSetAsset::Play_Implementation(UMusicManager* MusicManager, FMusicSetInstanceData& InstanceData) {
}

void UMusicSetAsset::OnEvent_Implementation(UMusicManager* MusicManager, FMusicSetInstanceData& InstanceData, EMusicEvent Event) {
}

UMusicSetAsset::UMusicSetAsset() {
    this->Priority = 1;
}

