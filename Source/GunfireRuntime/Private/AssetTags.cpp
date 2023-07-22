#include "AssetTags.h"

bool UAssetTags::SetAssetTag(UObject* Asset, FName Tag) {
    return false;
}

UAssetTags* UAssetTags::GetAssetTags(UObject* Asset) {
    return NULL;
}

bool UAssetTags::CheckAssetTags(UObject* Asset, const TArray<FName>& TagsToCheck, bool bAllOrNothing) {
    return false;
}

bool UAssetTags::CheckAssetTag(UObject* Asset, FName Tag) {
    return false;
}

UAssetTags::UAssetTags() {
}

