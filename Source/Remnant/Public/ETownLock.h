#pragma once
#include "CoreMinimal.h"
#include "ETownLock.generated.h"

UENUM(BlueprintType)
enum class ETownLock : uint8 {
    NoLock,
    OnlyTown,
    NotInTown,
};

