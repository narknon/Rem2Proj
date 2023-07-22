#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldSound.h"
#include "WorldSoundComponent.generated.h"

class USoundClass;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UWorldSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClassOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSound> AudioList;
    
public:
    UWorldSoundComponent();
    UFUNCTION(BlueprintCallable)
    void SetAudioList(const TArray<FWorldSound>& NewAudioList, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimers();
    
};

