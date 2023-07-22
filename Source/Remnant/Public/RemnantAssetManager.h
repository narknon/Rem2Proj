#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "RemnantAssetManager.generated.h"

UCLASS(Blueprintable)
class REMNANT_API URemnantAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    URemnantAssetManager();
};

