#pragma once
#include "CoreMinimal.h"
#include "PhysicsStateActor.h"
#include "PhysicsStateActorStaticMeshBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API APhysicsStateActorStaticMeshBase : public APhysicsStateActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WeaponPhantomMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* KinematicCollisionMesh;
    
public:
    APhysicsStateActorStaticMeshBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent() const;
    
};

