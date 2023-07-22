#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ChallengeTagInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UChallengeTagInterface : public UInterface {
    GENERATED_BODY()
};

class IChallengeTagInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherChallengeTags(TArray<FName>& Tags);
    
};

