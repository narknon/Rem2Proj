#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "ESwimmingType.h"
#include "SwimmingStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USwimmingStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwimmingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandleWaterEntry;
    
public:
    USwimmingStateDecorator();
};

