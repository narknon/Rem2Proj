#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/AudioVolume.h"
#include "Engine/Attenuation.h"
#include "AudioState.h"
#include "Templates/SubclassOf.h"
#include "WorldSound.h"
#include "AudioCustomVolume.generated.h"

class AAudioCustomVolume;
class UAmbientAudioComponent;
class UAudioComponent;
class UAudioStateID;
class UMusicSetAsset;
class USoundAttenuation;
class UWorldSoundComponent;
class UWorldSoundSet;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAudioCustomVolume : public AAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAudioCustomVolume*> HasPriorityOver;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldSoundSet* WorldSoundSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSound> WorldSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAttenuationShape::Type> AttenShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttenExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicSetAsset* MusicSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioStateID> CurrentStateID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmbientAudioComponent* PrimaryAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OnEnterAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OnExitAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldSoundComponent* WorldSoundComponent;
    
public:
    AAudioCustomVolume();
    UFUNCTION(BlueprintCallable)
    void SetState(TSubclassOf<UAudioStateID> StateID, bool bPlayTransitions);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndActiveVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginActiveVolume();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveVolume() const;
    
};

