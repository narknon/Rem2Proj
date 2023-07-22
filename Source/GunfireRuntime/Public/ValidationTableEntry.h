#pragma once
#include "CoreMinimal.h"
#include "ValidationEntryBase.h"
#include "ValidationTableEntry.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UValidationTableEntry : public UValidationEntryBase {
    GENERATED_BODY()
public:
    UValidationTableEntry();
};

