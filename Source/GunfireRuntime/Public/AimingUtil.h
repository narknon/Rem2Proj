#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AimingParameters.h"
#include "AimingUtil.generated.h"

class AActor;
class UAimingComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAimingUtil : public UObject {
    GENERATED_BODY()
public:
    UAimingUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowProjectileVisualization(AActor* Aimable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRange(AActor* Aimable);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCurrentAimable(AActor* Owner, bool bInHandOnly);
    
    UFUNCTION(BlueprintCallable)
    static FAimingParameters GetAimingParameters(AActor* Aimable);
    
    UFUNCTION(BlueprintCallable)
    static UAimingComponent* GetAimingComponent(AActor* Aimable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStopAiming(AActor* Aimable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAim(AActor* Aimable);
    
};

