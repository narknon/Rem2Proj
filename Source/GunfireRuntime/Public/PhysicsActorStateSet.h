#pragma once
#include "CoreMinimal.h"
#include "PhysicsActorState.h"
#include "Templates/SubclassOf.h"
#include "PhysicsActorStateSet.generated.h"

class UPhysicsBoundsType;

USTRUCT(BlueprintType)
struct FPhysicsActorStateSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhysicsBoundsType> PhysicsBoundsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryLinearVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryAngularVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsActorState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsActorState DisabledState;
    
    GUNFIRERUNTIME_API FPhysicsActorStateSet();
};

