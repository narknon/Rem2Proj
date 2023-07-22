#pragma once
#include "CoreMinimal.h"
#include "InteractableStateBase.h"
#include "InteractableState_Unready.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableState_Unready : public UInteractableStateBase {
    GENERATED_BODY()
public:
    UInteractableState_Unready();
};

