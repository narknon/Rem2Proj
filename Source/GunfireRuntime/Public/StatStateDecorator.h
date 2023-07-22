#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Conditions.h"
#include "StatDecoratorStat.h"
#include "StatStateDecorator.generated.h"

class AActor;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStatStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatDecoratorStat> StatsToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
public:
    UStatStateDecorator();
private:
    UFUNCTION(BlueprintCallable)
    void ComputeStats(AActor* Actor);
    
};

