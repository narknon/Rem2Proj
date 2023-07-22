#include "ItemManager.h"

void UItemManager::GetItemsInRangeByType(const FVector& Position, float Radius, TSoftClassPtr<AItem> Type, TArray<AItem*>& OutItems) {
}

UItemManager* UItemManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

UItemManager::UItemManager() {
}

