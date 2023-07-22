#pragma once
#include "CoreMinimal.h"
#include "InteractableState_Ready.h"
#include "InteractableState_InitReady.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableState_InitReady : public UInteractableState_Ready {
    GENERATED_BODY()
public:
    UInteractableState_InitReady();
};

