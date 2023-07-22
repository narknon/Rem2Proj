#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "EventStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitEvent;
    
public:
    UEventStateDecorator();
};

