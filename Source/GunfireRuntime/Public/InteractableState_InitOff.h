#pragma once
#include "CoreMinimal.h"
#include "InteractableState_Off.h"
#include "InteractableState_InitOff.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableState_InitOff : public UInteractableState_Off {
    GENERATED_BODY()
public:
    UInteractableState_InitOff();
};

