#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "LODVolumeInfo.h"
#include "LODVolumeManager.generated.h"

class ALODVolume;
class ULODVolumeManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API ULODVolumeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUpdateInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLODVolumeInfo> Volumes;
    
public:
    ULODVolumeManager();
    UFUNCTION(BlueprintCallable)
    void UpdateVolumesVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterVolume(ALODVolume* DestroyedVolume);
    
    UFUNCTION(BlueprintCallable)
    void RegisterVolume(ALODVolume* SpawnedVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishCooldown();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerRangeToVolume(ALODVolume* Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULODVolumeManager* GetInstance(UObject* WorldContextObject);
    
};

