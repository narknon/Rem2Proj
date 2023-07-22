#pragma once
#include "CoreMinimal.h"
#include "EEncodingOptions.generated.h"

UENUM(BlueprintType)
enum class EEncodingOptions : uint8 {
    AutoDetect,
    ForceAnsi,
    ForceUnicode,
    ForceUTF8,
    ForceUTF8WithoutBOM,
};

