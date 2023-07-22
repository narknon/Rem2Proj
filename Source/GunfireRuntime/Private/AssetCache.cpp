#include "AssetCache.h"

void UAssetCache::PreloadAssets() {
}

bool UAssetCache::IsAssetCachedPreloaded() {
    return false;
}

UAssetCache* UAssetCache::GetInstance() {
    return NULL;
}

UAssetCache::UAssetCache() {
    this->PreloadMethod = EAssetCachePreloadMethod::OnGameInstanceInit;
}

