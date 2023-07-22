#pragma once
#include "CoreMinimal.h"
#include "EAttackType.h"
#include "OnRegisterAttackDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRegisterAttackDelegate, AActor*, Attacker, AActor*, Target, EAttackType, AttackType);

