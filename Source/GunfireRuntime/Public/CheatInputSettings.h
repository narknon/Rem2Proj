#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatActionCategory.h"
#include "CheatInputAction.h"
#include "InputKeySet.h"
#include "CheatInputSettings.generated.h"

class AUIActor;
class UUserWidget;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Input)
class GUNFIRERUNTIME_API UCheatInputSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheatsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheatMenuWaitsFullDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputKeySet> GlobalCheatToggleKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AUIActor> GlobalCheatMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> FlyCheatMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CheatToast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatActionCategory> CheatCategories;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatInputAction> ActionMappings;
    
    UCheatInputSettings();
};

