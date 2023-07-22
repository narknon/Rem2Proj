#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunfireAnalogCursorManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UGunfireAnalogCursorManager : public UActorComponent {
    GENERATED_BODY()
public:
    UGunfireAnalogCursorManager();
    UFUNCTION(BlueprintCallable)
    void OnControllerConnectionChanged(bool bConnected);
    
    UFUNCTION(BlueprintCallable)
    bool GetAnalogCursorActiveState();
    
};

