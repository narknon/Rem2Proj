#include "ResolutionUserSetting.h"

void UResolutionUserSetting::SetValue(FIntPoint NewResolution) {
}

void UResolutionUserSetting::ResetList(bool bMatchNativeAspectRatio) {
}

FIntPoint UResolutionUserSetting::GetValue() {
    return FIntPoint{};
}

FIntPoint UResolutionUserSetting::GetNextResolution(FIntPoint Current, bool bForwards) {
    return FIntPoint{};
}

UResolutionUserSetting::UResolutionUserSetting() {
    this->bWraps = true;
    this->LowVideoMemoryThreshold = 4500;
    this->LowVideoMemoryResolutionClamp = 1080;
}

