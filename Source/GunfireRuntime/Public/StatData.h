#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StatData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FStatData : public FTableRowBase {
    GENERATED_BODY()
public:
    FStatData();
};

