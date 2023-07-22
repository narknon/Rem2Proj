#pragma once
#include "CoreMinimal.h"
#include "PhysicsStateActor.h"
#include "PhysicsStateActorBoxBase.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API APhysicsStateActorBoxBase : public APhysicsStateActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WeaponPhantomBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* KinematicCollisionBox;
    
public:
    APhysicsStateActorBoxBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetBoxComponent() const;
    
};

