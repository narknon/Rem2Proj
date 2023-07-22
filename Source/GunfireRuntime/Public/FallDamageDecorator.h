#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "FallDamageDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UFallDamageDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnExit;
    
public:
    UFallDamageDecorator();
};

