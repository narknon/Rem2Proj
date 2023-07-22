#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnOnlineSessionWaitDialogDelegate.h"
#include "GunfireOnlineSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIREONLINEMODULE_API UGunfireOnlineSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionWaitDialog OnWaitDialog;
    
    UGunfireOnlineSubsystemBase();
    UFUNCTION(BlueprintCallable)
    bool CanPlayOnline();
    
};

