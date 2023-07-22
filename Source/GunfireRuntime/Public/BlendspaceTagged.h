#pragma once
#include "CoreMinimal.h"
#include "AnimationAssetTagged.h"
#include "AnimationSetBlendspace.h"
#include "BlendspaceTagged.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBlendspaceTagged : public UAnimationAssetTagged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationSetBlendspace> BlendSpaces;
    
    UBlendspaceTagged();
};

