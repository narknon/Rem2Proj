#pragma once
#include "CoreMinimal.h"
#include "AnimationAssetTagged.h"
#include "AnimationTagged.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAnimationTagged : public UAnimationAssetTagged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> SlaveAnimations;
    
    UAnimationTagged();
};

