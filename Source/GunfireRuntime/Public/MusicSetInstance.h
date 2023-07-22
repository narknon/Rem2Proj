#pragma once
#include "CoreMinimal.h"
#include "MusicSetInstanceData.h"
#include "MusicSetInstance.generated.h"

class UMusicSetAsset;
class UObject;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FMusicSetInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSetAsset* MusicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMusicSetInstanceData InstanceData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> Instigators;
    
public:
    FMusicSetInstance();
};

