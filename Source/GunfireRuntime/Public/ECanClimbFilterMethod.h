#pragma once
#include "CoreMinimal.h"
#include "ECanClimbFilterMethod.generated.h"

UENUM()
enum class ECanClimbFilterMethod : int32 {
    AfterCurrentClimb,
    ContinuousTransition,
    Any,
};

