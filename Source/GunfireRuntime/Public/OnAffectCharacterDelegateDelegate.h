#pragma once
#include "CoreMinimal.h"
#include "OnAffectCharacterDelegateDelegate.generated.h"

class AActor;
class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAffectCharacterDelegate, ACharacter*, Character, AActor*, BoundsActor);

