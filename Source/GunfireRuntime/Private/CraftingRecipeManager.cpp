#include "CraftingRecipeManager.h"

UCraftingRecipeManager* UCraftingRecipeManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

TSet<TSoftClassPtr<AItem>> UCraftingRecipeManager::GetAllMaterials(UObject* WorldContextObject) {
    return TSet<TSoftClassPtr<AItem>>();
}

UCraftingRecipeManager::UCraftingRecipeManager() {
}

