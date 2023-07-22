#pragma once
#include "CoreMinimal.h"
#include "AmbientAudioChannel.generated.h"

class UAmbientAudioComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAmbientAudioChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAmbientAudioComponent> PrimaryComponent;
    
    FAmbientAudioChannel();
};

