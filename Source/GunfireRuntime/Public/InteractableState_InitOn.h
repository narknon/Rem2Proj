#pragma once
#include "CoreMinimal.h"
#include "InteractableState_On.h"
#include "InteractableState_InitOn.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableState_InitOn : public UInteractableState_On {
    GENERATED_BODY()
public:
    UInteractableState_InitOn();
};

