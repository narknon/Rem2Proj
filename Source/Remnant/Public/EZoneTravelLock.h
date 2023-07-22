#pragma once
#include "CoreMinimal.h"
#include "EZoneTravelLock.generated.h"

UENUM(BlueprintType)
enum class EZoneTravelLock : uint8 {
    None,
    Menu,
    Dialog,
    Saving,
    TravelMenu,
    ConnectingPlayer,
    Traveling,
    Proximity,
    Wounded,
    QuestInit,
    QuestMenu,
};

