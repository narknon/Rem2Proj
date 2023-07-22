#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GunfireAudioInterface.h"
#include "GunfireAudioUnrealImpl.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGunfireAudioUnrealImpl : public UObject, public IGunfireAudioInterface {
    GENERATED_BODY()
public:
    UGunfireAudioUnrealImpl();
private:
    UFUNCTION(BlueprintCallable)
    void OnAudioFinished(UAudioComponent* UnrealAudioComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

