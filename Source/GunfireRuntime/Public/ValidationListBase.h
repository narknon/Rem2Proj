#pragma once
#include "CoreMinimal.h"
#include "ValidationEntryBase.h"
#include "ValidationListBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UValidationListBase : public UValidationEntryBase {
    GENERATED_BODY()
public:
    UValidationListBase();
};

