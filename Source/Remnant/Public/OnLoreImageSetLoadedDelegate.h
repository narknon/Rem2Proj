#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnLoreImageSetLoadedDelegate.generated.h"

class ALoreItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoreImageSetLoaded, TSubclassOf<ALoreItem>, Lore);

