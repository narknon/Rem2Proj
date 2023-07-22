#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkAudioCustomVolume.generated.h"

class UAkLateReverbComponent;
class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API AAkAudioCustomVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    AAkAudioCustomVolume();
};

