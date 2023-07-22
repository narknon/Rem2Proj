#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TracerPathSegment.h"
#include "Tracer.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ATracer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlightTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTracerPathSegment> TracerPath;
    
public:
    ATracer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitFromCause(AActor* Cause);
    
};

