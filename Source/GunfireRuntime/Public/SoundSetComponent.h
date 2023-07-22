#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunfireAudioAttachParams.h"
#include "GunfireAudioPlayParams.h"
#include "GunfireAudioPlayingID.h"
#include "SoftSoundGunfire.h"
#include "SoundGunfire.h"
#include "SoundSetComponent.generated.h"

class UMeshComponent;
class USoundSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USoundSetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSet* SoundSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SoundTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
public:
    USoundSetComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveSoundTag(FName SoundTag);
    
    UFUNCTION(BlueprintCallable)
    FGunfireAudioPlayingID PlaySound2D(FName SoundIDName, const FGunfireAudioPlayParams& PlayParams);
    
    UFUNCTION(BlueprintCallable)
    FGunfireAudioPlayingID PlaySound(FName SoundIDName, const FGunfireAudioPlayParams& PlayParams, const FGunfireAudioAttachParams& AttachParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSoundTag(FName SoundTag) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSoundTags();
    
    UFUNCTION(BlueprintCallable)
    FSoftSoundGunfire GetSoundSoft(FName SoundIDName);
    
    UFUNCTION(BlueprintCallable)
    FSoundGunfire GetSound(FName SoundIDName);
    
    UFUNCTION(BlueprintCallable)
    void AddUniqueSoundTag(FName SoundTag);
    
};

