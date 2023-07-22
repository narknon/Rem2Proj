#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EInputDevice.h"
#include "HardwareCursorStyles.h"
#include "GunfireUserInterfaceSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIRERUNTIME_API UGunfireUserInterfaceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfirmInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputDevice, FHardwareCursorStyles> HardwareCursorProperties;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinResolutionForHighResCursor;
    
    UGunfireUserInterfaceSettings();
};

