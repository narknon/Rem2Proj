#pragma once
#include "CoreMinimal.h"
#include "CharacterCreatedDelegateDelegate.generated.h"

class USavedCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCreatedDelegate, USavedCharacter*, Character);

