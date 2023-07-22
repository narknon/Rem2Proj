#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PlayAnimByAnimTags_AnimEntry.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimNode_PlayAnimByAnimTags_AnimEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> Animations;
    
    FAnimNode_PlayAnimByAnimTags_AnimEntry();
};

