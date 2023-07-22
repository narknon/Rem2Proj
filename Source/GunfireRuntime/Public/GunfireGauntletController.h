#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "GunfireGauntletController.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGunfireGauntletController : public UGauntletTestController {
    GENERATED_BODY()
public:
    UGunfireGauntletController(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void StopTesting();
    
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTesting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartProfiling();
    
};

