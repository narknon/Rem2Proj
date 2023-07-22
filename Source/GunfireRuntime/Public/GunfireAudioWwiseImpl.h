#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioComponentGunfire.h"
#include "GunfireAudioInterface.h"
#include "GunfireAudioPlayParams.h"
#include "GunfireAudioWwiseImpl.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGunfireAudioWwiseImpl : public UObject, public IGunfireAudioInterface {
    GENERATED_BODY()
public:
    UGunfireAudioWwiseImpl();
    UFUNCTION(BlueprintCallable)
    void UnregisterForDoppler(int64 GameObjectId, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVolumeMultiplierByPlayingId(int32 PlayingID, float Multiplier, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVolumeMultiplierByGameObjectId(int64 GameObjectId, float Multiplier, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSwitchForGameObjectId(int64 GameObjectId, FName Group, FName State);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSwitchByIdForGameObjectId(int64 GameObjectId, int32 GroupShortID, int32 StateShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPitchMultiplierByPlayingId(int32 PlayingID, float Multiplier, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPitchMultiplierByGameObjectId(int64 GameObjectId, float Multiplier, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForDoppler(int64 GameObjectId, int32 PlayingID, FName RTPCName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTransientMasterVolume(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInterfaceInstalled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventPosted(UObject* Context, int64 GameObjectId, int32 PlayingID, const FGunfireAudioPlayParams& PlayParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPIE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginPIE();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeforeEventPosted(UObject* Context, int64 GameObjectId, const FGunfireAudioPlayParams& PlayParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetVolumeMultiplierByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetVolumeMultiplierByGameObjectId(int64 GameObjectId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPitchMultiplierByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetPitchMultiplierByGameObjectId(int64 GameObjectId);
    
    UFUNCTION(BlueprintCallable)
    static FAudioComponentGunfire GetAudioComponentByGameObjectId(int64 GameObjectId);
    
    
    // Fix for true pure virtual functions not being implemented
};

