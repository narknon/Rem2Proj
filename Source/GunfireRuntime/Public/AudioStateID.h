#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioStateID.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UAudioStateID : public UObject {
    GENERATED_BODY()
public:
    UAudioStateID();
};

