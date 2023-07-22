#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraitDeferredDelegateDelegate.generated.h"

class UTrait;
class UTraitsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTraitDeferredDelegate, TSubclassOf<UTrait>, Trait, UTraitsComponent*, Component, bool, Result);

