#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "OnBeginActiveSoundDelegate.h"
#include "OnEndActiveSoundDelegate.h"
#include "AmbientAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAmbientAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginActiveSound OnBeginActiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndActiveSound OnEndActiveSound;
    
    UAmbientAudioComponent();
};

