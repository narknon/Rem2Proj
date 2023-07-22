#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ImageSetSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIRERUNTIME_API UImageSetSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ImageSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AltImageSetName;
    
    UImageSetSettings();
};

