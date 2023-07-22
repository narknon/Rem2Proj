#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioComponentGunfire.h"
#include "DamageInfo.h"
#include "SoundGunfire.h"
#include "BlueprintFunctionLibraryGunfire.generated.h"

class UActorComponent;
class UAkAudioEvent;
class UAkComponent;
class UAkGameObject;
class UAudioComponent;
class UDecalComponent;
class UObject;
class USceneComponent;
class USoundBase;
class USoundCue;
class USoundWave;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBlueprintFunctionLibraryGunfire : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintFunctionLibraryGunfire();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkGameObject* Conv_AudioComponentGunfireToAkGameObject(FAudioComponentGunfire AudioComponentGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioComponentGunfire Conv_AkGameObjectToAudioComponentGunfire(UAkGameObject* AkGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkComponent* Conv_AudioComponentGunfireToAkComponent(FAudioComponentGunfire AudioComponentGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioComponentGunfire Conv_AkComponentToAudioComponentGunfire(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkAudioEvent* Conv_SoundGunfireToAkAudioEvent(FSoundGunfire SoundGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundGunfire Conv_AkAudioEventToSoundGunfire(UAkAudioEvent* AkAudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAudioComponent* Conv_AudioComponentGunfireToAudioComponent(FAudioComponentGunfire AudioComponentGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioComponentGunfire Conv_AudioComponentToAudioComponentGunfire(UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundCue* Conv_SoundGunfireToSoundCue(FSoundGunfire SoundGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundGunfire Conv_SoundCueToSoundGunfire(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundWave* Conv_SoundGunfireToSoundWave(FSoundGunfire SoundGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundGunfire Conv_SoundWaveToSoundGunfire(USoundWave* SoundWave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundBase* Conv_SoundGunfireToSoundBase(FSoundGunfire SoundGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundGunfire Conv_SoundBaseToSoundGunfire(USoundBase* SoundBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* Conv_AudioComponentGunfireToActorComponent(FAudioComponentGunfire AudioComponentGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioComponentGunfire Conv_ActorComponentToAudioComponentGunfire(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* Conv_AudioComponentGunfireToSceneComponent(FAudioComponentGunfire AudioComponentGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioComponentGunfire Conv_SceneComponentToAudioComponentGunfire(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* Conv_SoundGunfireToObject(FSoundGunfire SoundGunfire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundGunfire Conv_ObjectToSoundGunfire(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void SetFadeScreenSize(UDecalComponent* Decal, float Size);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageInfoVariableObject(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageInfoVariableInt(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageInfoVariableFloat(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageInfoVariableBool(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyDamageInfoVariableInt(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyDamageInfoVariableFloat(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool HasDamageInfoVariable(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetDamageInfoVariableObject(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDamageInfoVariableInt(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static float GetDamageInfoVariableFloat(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDamageInfoVariableBool(UPARAM(Ref) FDamageInfo& DamageInfo, const FName& VariableName);
    
};

