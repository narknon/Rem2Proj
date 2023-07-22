#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineBase.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ASplineBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstanceToBeMerged;
    
    ASplineBase();
};

