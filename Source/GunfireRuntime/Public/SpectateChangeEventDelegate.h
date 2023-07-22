#pragma once
#include "CoreMinimal.h"
#include "SpectateChangeEventDelegate.generated.h"

class AActor;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpectateChangeEvent, AActor*, Target, APlayerController*, Player);

