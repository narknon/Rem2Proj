#pragma once
#include "CoreMinimal.h"
#include "Trait.h"
#include "RemnantTrait.generated.h"

UCLASS(Blueprintable)
class REMNANT_API URemnantTrait : public UTrait {
    GENERATED_BODY()
public:
    URemnantTrait();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTraitProgress(int32 Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetTraitProgress();
    
};

