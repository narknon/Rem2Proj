#pragma once
#include "CoreMinimal.h"
#include "GunfireTechRequirementsImpl.h"
#include "GunfireTechRequirementsImplWin64.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GUNFIRETECHREQUIREMENTS_API UGunfireTechRequirementsImplWin64 : public UGunfireTechRequirementsImpl {
    GENERATED_BODY()
public:
    UGunfireTechRequirementsImplWin64();
protected:
    UFUNCTION(BlueprintCallable)
    void VoipHotkeyReleased(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void VoipHotkeyPressed(APlayerController* PlayerController);
    
};

