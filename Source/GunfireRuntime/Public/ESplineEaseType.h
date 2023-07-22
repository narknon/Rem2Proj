#pragma once
#include "CoreMinimal.h"
#include "ESplineEaseType.generated.h"

UENUM(BlueprintType)
namespace ESplineEaseType {
    enum Type {
        NoEase,
        EaseByTime,
    };
}

