#pragma once
#include "CoreMinimal.h"
#include "PhysicsStateActor.h"
#include "PhysicsStateActorSphereBase.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API APhysicsStateActorSphereBase : public APhysicsStateActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* WeaponPhantomSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* KinematicCollisionSphere;
    
public:
    APhysicsStateActorSphereBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetSphereComponent() const;
    
};

