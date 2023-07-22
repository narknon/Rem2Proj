#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraEffect.h"
#include "OnStopCameraFadeDelegateDelegate.h"
#include "OnViewTargetChangeDelegateDelegate.h"
#include "PlayerCameraManagerGunfire.generated.h"

class AActor;
class UGameUserSettingsGunfire;

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API APlayerCameraManagerGunfire : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopCameraFadeDelegate OnStopCameraFadeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewTargetChangeDelegate OnViewTargetPreChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewTargetChangeDelegate OnViewTargetPostChangeEvent;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CurrentEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraEffect> CurrentEffects;
    
public:
    APlayerCameraManagerGunfire();
protected:
    UFUNCTION(BlueprintCallable)
    void SettingsRebuilt(UGameUserSettingsGunfire* UserSettings);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCameraEffect(int32 HandleID);
    
    UFUNCTION(BlueprintCallable)
    void ModifyCameraEffectIntensity(int32 HandleID, FName ParticleIntensityParam, float ParticleIntensity, bool ResetSystem);
    
    UFUNCTION(BlueprintCallable)
    bool GetCameraEffectForHandleID(int32 HandleID, FCameraEffect& OutEffect);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCameraEffect(FCameraEffect Effect, AActor* EffectViewTarget);
    
};

