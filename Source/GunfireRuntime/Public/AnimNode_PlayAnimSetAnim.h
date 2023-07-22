#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_DirectionalAnimationPlayer.h"
#include "AnimationSetBlendspace.h"
#include "AnimNode_PlayAnimSetAnim.generated.h"

class UAnimSequenceBase;
class UAnimationAssetTagged;
class UAnimationNamed;
class UAnimationSet;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_PlayAnimSetAnim : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationNamed* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAssetTagged* AssetEntry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimationSetBlendspace BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimNode_DirectionalAnimationPlayer DirectionalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
public:
    FAnimNode_PlayAnimSetAnim();
};

