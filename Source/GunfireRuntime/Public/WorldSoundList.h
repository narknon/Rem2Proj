#pragma once
#include "CoreMinimal.h"
#include "WorldSoundList.generated.h"

class UWorldSoundEntry;

USTRUCT(BlueprintType)
struct FWorldSoundList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldSoundEntry*> Entries;
    
    GUNFIRERUNTIME_API FWorldSoundList();
};

