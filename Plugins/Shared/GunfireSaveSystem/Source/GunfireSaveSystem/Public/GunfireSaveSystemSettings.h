#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GunfireSaveSystemSettings.generated.h"

class USaveGameProfile;
class USaveGameWorld;

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIRESAVESYSTEM_API UGunfireSaveSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USaveGameWorld> SaveGameClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USaveGameProfile> SaveProfileClass;
    
    UGunfireSaveSystemSettings();
};

