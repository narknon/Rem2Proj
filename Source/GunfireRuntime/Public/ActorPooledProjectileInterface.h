#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "ActorPooledProjectileInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UActorPooledProjectileInterface : public UInterface {
    GENERATED_BODY()
};

class IActorPooledProjectileInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WantsPoolForClass(TSubclassOf<AActor> ProjectileClass);
    
};

