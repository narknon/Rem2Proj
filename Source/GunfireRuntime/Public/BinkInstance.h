#pragma once
#include "CoreMinimal.h"
#include "CinematicInstance_Base.h"
#include "SoundGunfire.h"
#include "BinkInstance.generated.h"

class UBinkMediaTexture;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBinkInstance : public UCinematicInstance_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* BinkTextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundGunfire MediaSound;
    
public:
    UBinkInstance();
};

