#pragma once
#include "CoreMinimal.h"
#include "SoundInstanceDelegateDelegate.generated.h"

class UPhysicsSoundInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoundInstanceDelegate, UPhysicsSoundInstance*, SoundInstanceObject);

