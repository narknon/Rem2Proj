#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FlyCameraController.generated.h"

UCLASS(Blueprintable, HideDropdown)
class GUNFIRERUNTIME_API AFlyCameraController : public APlayerController {
    GENERATED_BODY()
public:
    AFlyCameraController();
};

