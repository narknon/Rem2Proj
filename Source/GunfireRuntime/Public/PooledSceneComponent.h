#pragma once
#include "CoreMinimal.h"
#include "PooledItem.h"
#include "PooledSceneComponent.generated.h"

UCLASS(Blueprintable)
class UPooledSceneComponent : public UPooledItem {
    GENERATED_BODY()
public:
    UPooledSceneComponent();
};

