#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ReviverInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UReviverInterface : public UInterface {
    GENERATED_BODY()
};

class IReviverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRevive(AActor* Actor, bool bSkipWoundCheck);
    
};

