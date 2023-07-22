#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CinematicInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCinematicInterface : public UInterface {
    GENERATED_BODY()
};

class ICinematicInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSequencerPossessionEvent(bool IsPossessed);
    
};

