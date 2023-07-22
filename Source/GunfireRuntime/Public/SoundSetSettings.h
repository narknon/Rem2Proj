#pragma once
#include "CoreMinimal.h"
#include "SoundSetSettings.generated.h"

class USoundSet;

USTRUCT(BlueprintType)
struct FSoundSetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundSet> PreviewSoundSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviewTags;
    
    GUNFIRERUNTIME_API FSoundSetSettings();
};

