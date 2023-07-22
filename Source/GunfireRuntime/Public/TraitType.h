#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TraitType.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UTraitType : public UObject {
    GENERATED_BODY()
public:
    UTraitType();
};

