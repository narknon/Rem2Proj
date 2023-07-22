#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "ENavigationType.h"
#include "AINavigationStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAINavigationStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationType NavigationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreOnExit;
    
public:
    UAINavigationStateDecorator();
};

