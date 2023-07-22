#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Cinematic_Base.h"
#include "SoftSoundGunfire.h"
#include "EventTreeNode_BinkCinematic.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_BinkCinematic : public UEventTreeNode_Cinematic_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBinkMediaPlayer> BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBinkMediaTexture> BinkTextureAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftSoundGunfire MediaSound;
    
    UEventTreeNode_BinkCinematic();
};

