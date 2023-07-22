#include "AssetUtil.h"

UObject* UAssetUtil::LoadSoftReference(const TSoftObjectPtr<UObject>& SoftObjRef) {
    return NULL;
}

UClass* UAssetUtil::LoadSoftClassReference(const TSoftClassPtr<UObject>& SoftClsRef) {
    return NULL;
}

UObject* UAssetUtil::LoadObjectFromPath(FName Path) {
    return NULL;
}

bool UAssetUtil::IsChildOfSoftClasses(AActor* Actor, const TArray<TSoftClassPtr<AActor>>& Classes) {
    return false;
}

bool UAssetUtil::GetObjectPath(UObject* Object, FString& Path) {
    return false;
}

FString UAssetUtil::GetCleanLevelStreamingName(const UWorld* World, const ULevelStreaming* Level, bool AppendBaseName) {
    return TEXT("");
}

FString UAssetUtil::GetCleanLevelPackageName(const UWorld* World, const FString& LevelPackagePath, bool AppendBaseName) {
    return TEXT("");
}

UObject* UAssetUtil::GetAssetFromComponent(const UActorComponent* Component) {
    return NULL;
}

UAssetUtil::UAssetUtil() {
}

