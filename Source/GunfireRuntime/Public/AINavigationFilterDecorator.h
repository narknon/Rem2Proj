#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "AINavigationFilterDecorator.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAINavigationFilterDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterOverride;
    
public:
    UAINavigationFilterDecorator();
};

