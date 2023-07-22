#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "OnViewTargetChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnViewTargetChangeDelegate, FTViewTarget, ViewTarget, AActor*, NewTarget, AActor*, OldTarget);

