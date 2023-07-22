#pragma once
#include "CoreMinimal.h"
#include "MinimapEntityRegistrationChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMinimapEntityRegistrationChanged, AActor*, Entity, bool, IsRegistering);

