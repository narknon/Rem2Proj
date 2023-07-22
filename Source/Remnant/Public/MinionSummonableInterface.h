#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MinionSummonableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMinionSummonableInterface : public UInterface {
    GENERATED_BODY()
};

class IMinionSummonableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxSummons() const;
    
};

