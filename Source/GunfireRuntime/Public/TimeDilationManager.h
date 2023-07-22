#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETimeDilationMode.h"
#include "TimeDilationEffectHandle.h"
#include "TimeDilationManager.generated.h"

class AActor;
class APlayerControllerGunfire;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UTimeDilationManager : public UActorComponent {
    GENERATED_BODY()
public:
    UTimeDilationManager();
    UFUNCTION(BlueprintCallable)
    static void SetTimeDilationMode(AActor* InActor, ETimeDilationMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeDilation(AActor* InActor, float InTimeDilation, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalTimeDilation(UObject* WorldContextObject, float InTimeDilation, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static FTimeDilationEffectHandle PlayTimeDilationEffect(AActor* InActor, float InTimeDilation, float InDuration, float EaseInTime, float EaseOutTime, bool bIsHitPause);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimeDilationEffectHandle PlayGlobalTimeDilationEffect(UObject* WorldContextObject, float InTimeDilation, float InDuration, float EaseInTime, float EaseOutTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematic(APlayerControllerGunfire* Player, bool bIsInCinematicMode);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsTimeDilationEffectEasingOut(AActor* InActor, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTimeDilationEffectActive(AActor* InActor, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingHitPause(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeDilation(AActor* InActor, bool bOnlyForTag, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGlobalTimeDilation(UObject* WorldContextObject, bool bOnlyForTag, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void EaseOutTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTimeDilation(AActor* InActor, bool bClearEffects, bool bOnlyForTag, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearGlobalTimeDilationEffect(UObject* WorldContextObject, FTimeDilationEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearGlobalTimeDilation(UObject* WorldContextObject, bool bClearEffects, bool bOnlyForTag, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllTimeDilation(UObject* WorldContextObject);
    
};

