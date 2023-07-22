#pragma once
#include "CoreMinimal.h"
#include "GunfireTechRequirementsImplWin64.h"
#include "GunfireTechRequirementsImplSteam.generated.h"

UCLASS(Blueprintable)
class GUNFIRETECHREQUIREMENTSSTEAM_API UGunfireTechRequirementsImplSteam : public UGunfireTechRequirementsImplWin64 {
    GENERATED_BODY()
public:
    UGunfireTechRequirementsImplSteam();
};

