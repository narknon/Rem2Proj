#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GunfireOnlineSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIREONLINEMODULE_API UGunfireOnlineSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsSessionsInMainMenu;
    
    UGunfireOnlineSettings();
};

