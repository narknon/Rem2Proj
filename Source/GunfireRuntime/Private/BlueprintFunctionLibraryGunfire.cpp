#include "BlueprintFunctionLibraryGunfire.h"

UAkGameObject* UBlueprintFunctionLibraryGunfire::Conv_AudioComponentGunfireToAkGameObject(FAudioComponentGunfire AudioComponentGunfire) {
    return NULL;
}

FAudioComponentGunfire UBlueprintFunctionLibraryGunfire::Conv_AkGameObjectToAudioComponentGunfire(UAkGameObject* AkGameObject) {
    return FAudioComponentGunfire{};
}

UAkComponent* UBlueprintFunctionLibraryGunfire::Conv_AudioComponentGunfireToAkComponent(FAudioComponentGunfire AudioComponentGunfire) {
    return NULL;
}

FAudioComponentGunfire UBlueprintFunctionLibraryGunfire::Conv_AkComponentToAudioComponentGunfire(UAkComponent* AkComponent) {
    return FAudioComponentGunfire{};
}

UAkAudioEvent* UBlueprintFunctionLibraryGunfire::Conv_SoundGunfireToAkAudioEvent(FSoundGunfire SoundGunfire) {
    return NULL;
}

FSoundGunfire UBlueprintFunctionLibraryGunfire::Conv_AkAudioEventToSoundGunfire(UAkAudioEvent* AkAudioEvent) {
    return FSoundGunfire{};
}

UAudioComponent* UBlueprintFunctionLibraryGunfire::Conv_AudioComponentGunfireToAudioComponent(FAudioComponentGunfire AudioComponentGunfire) {
    return NULL;
}

FAudioComponentGunfire UBlueprintFunctionLibraryGunfire::Conv_AudioComponentToAudioComponentGunfire(UAudioComponent* AudioComponent) {
    return FAudioComponentGunfire{};
}

USoundCue* UBlueprintFunctionLibraryGunfire::Conv_SoundGunfireToSoundCue(FSoundGunfire SoundGunfire) {
    return NULL;
}

FSoundGunfire UBlueprintFunctionLibraryGunfire::Conv_SoundCueToSoundGunfire(USoundCue* SoundCue) {
    return FSoundGunfire{};
}

USoundWave* UBlueprintFunctionLibraryGunfire::Conv_SoundGunfireToSoundWave(FSoundGunfire SoundGunfire) {
    return NULL;
}

FSoundGunfire UBlueprintFunctionLibraryGunfire::Conv_SoundWaveToSoundGunfire(USoundWave* SoundWave) {
    return FSoundGunfire{};
}

USoundBase* UBlueprintFunctionLibraryGunfire::Conv_SoundGunfireToSoundBase(FSoundGunfire SoundGunfire) {
    return NULL;
}

FSoundGunfire UBlueprintFunctionLibraryGunfire::Conv_SoundBaseToSoundGunfire(USoundBase* SoundBase) {
    return FSoundGunfire{};
}

UActorComponent* UBlueprintFunctionLibraryGunfire::Conv_AudioComponentGunfireToActorComponent(FAudioComponentGunfire AudioComponentGunfire) {
    return NULL;
}

FAudioComponentGunfire UBlueprintFunctionLibraryGunfire::Conv_ActorComponentToAudioComponentGunfire(UActorComponent* ActorComponent) {
    return FAudioComponentGunfire{};
}

USceneComponent* UBlueprintFunctionLibraryGunfire::Conv_AudioComponentGunfireToSceneComponent(FAudioComponentGunfire AudioComponentGunfire) {
    return NULL;
}

FAudioComponentGunfire UBlueprintFunctionLibraryGunfire::Conv_SceneComponentToAudioComponentGunfire(USceneComponent* SceneComponent) {
    return FAudioComponentGunfire{};
}

UObject* UBlueprintFunctionLibraryGunfire::Conv_SoundGunfireToObject(FSoundGunfire SoundGunfire) {
    return NULL;
}

FSoundGunfire UBlueprintFunctionLibraryGunfire::Conv_ObjectToSoundGunfire(UObject* Object) {
    return FSoundGunfire{};
}

void UBlueprintFunctionLibraryGunfire::SetFadeScreenSize(UDecalComponent* Decal, float Size) {
}

void UBlueprintFunctionLibraryGunfire::SetDamageInfoVariableObject(FDamageInfo& DamageInfo, const FName& VariableName, UObject* Value) {
}

void UBlueprintFunctionLibraryGunfire::SetDamageInfoVariableInt(FDamageInfo& DamageInfo, const FName& VariableName, int32 Value) {
}

void UBlueprintFunctionLibraryGunfire::SetDamageInfoVariableFloat(FDamageInfo& DamageInfo, const FName& VariableName, float Value) {
}

void UBlueprintFunctionLibraryGunfire::SetDamageInfoVariableBool(FDamageInfo& DamageInfo, const FName& VariableName, bool Value) {
}

void UBlueprintFunctionLibraryGunfire::ModifyDamageInfoVariableInt(FDamageInfo& DamageInfo, const FName& VariableName, int32 Value) {
}

void UBlueprintFunctionLibraryGunfire::ModifyDamageInfoVariableFloat(FDamageInfo& DamageInfo, const FName& VariableName, float Value) {
}

bool UBlueprintFunctionLibraryGunfire::HasDamageInfoVariable(FDamageInfo& DamageInfo, const FName& VariableName) {
    return false;
}

UObject* UBlueprintFunctionLibraryGunfire::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

UObject* UBlueprintFunctionLibraryGunfire::GetDamageInfoVariableObject(FDamageInfo& DamageInfo, const FName& VariableName) {
    return NULL;
}

int32 UBlueprintFunctionLibraryGunfire::GetDamageInfoVariableInt(FDamageInfo& DamageInfo, const FName& VariableName) {
    return 0;
}

float UBlueprintFunctionLibraryGunfire::GetDamageInfoVariableFloat(FDamageInfo& DamageInfo, const FName& VariableName) {
    return 0.0f;
}

bool UBlueprintFunctionLibraryGunfire::GetDamageInfoVariableBool(FDamageInfo& DamageInfo, const FName& VariableName) {
    return false;
}

UBlueprintFunctionLibraryGunfire::UBlueprintFunctionLibraryGunfire() {
}

