#pragma once
#include "CoreMinimal.h"
#include "EDialogTravelLock.generated.h"

UENUM(BlueprintType)
enum class EDialogTravelLock : uint8 {
    None,
    Menu,
    Dialog,
    TravelMenu,
    QuestSelectMenu,
};

