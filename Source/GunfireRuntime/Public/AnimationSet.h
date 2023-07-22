#pragma once
#include "CoreMinimal.h"
#include "AnimationID.h"
#include "InheritableNameTagAsset.h"
#include "AnimationSet.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAnimationSet : public UInheritableNameTagAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationID> AnimationsIDs;
    
public:
    UAnimationSet();
};

