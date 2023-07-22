#pragma once
#include "CoreMinimal.h"
#include "PooledItem.h"
#include "PooledActor.generated.h"

UCLASS(Blueprintable)
class UPooledActor : public UPooledItem {
    GENERATED_BODY()
public:
    UPooledActor();
};

