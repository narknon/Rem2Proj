#pragma once
#include "CoreMinimal.h"
#include "QuestTileActiveDelegateDelegate.generated.h"

class URemnantQuestTile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestTileActiveDelegate, URemnantQuestTile*, QuestTile, bool, Active);

