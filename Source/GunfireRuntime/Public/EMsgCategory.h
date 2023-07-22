#pragma once
#include "CoreMinimal.h"
#include "EMsgCategory.generated.h"

UENUM(BlueprintType)
enum class EMsgCategory : uint8 {
    Loading,
    PreRuntime,
    Runtime,
    FBXImport,
};

