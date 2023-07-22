#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "TimeDilationDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTimeDilationDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOutTime;
    
public:
    UTimeDilationDecorator();
};

