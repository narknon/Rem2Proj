#pragma once
#include "CoreMinimal.h"
#include "ESplineAttachmentRule.generated.h"

UENUM(BlueprintType)
namespace ESplineAttachmentRule {
    enum Type {
        Start,
        End,
        Closest,
        CustomTime,
    };
}

