#pragma once
#include "CoreMinimal.h"
#include "InteractableState_Unready.h"
#include "InteractableState_InitUnready.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableState_InitUnready : public UInteractableState_Unready {
    GENERATED_BODY()
public:
    UInteractableState_InitUnready();
};

