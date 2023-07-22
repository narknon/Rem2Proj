#pragma once
#include "CoreMinimal.h"
#include "OnWeaponModUsedDelegateDelegate.generated.h"

class ACharacterGunfire;
class ARemnantWeaponMod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponModUsedDelegate, ACharacterGunfire*, Character, ARemnantWeaponMod*, Mod);

