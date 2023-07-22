#pragma once
#include "CoreMinimal.h"
#include "ZoneLinkInfo.h"
#include "QuestZonelinkEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestZonelinkEvent, FZoneLinkInfo, ZoneLink);

