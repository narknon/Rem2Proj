#include "RemnantAssetManagerSettings.h"

URemnantAssetManagerSettings::URemnantAssetManagerSettings() {
    this->AssetPakRedirection.AddDefaulted(2);
    this->AssetsToIgnoreFile = TEXT("AssetsToIgnore.json");
}

