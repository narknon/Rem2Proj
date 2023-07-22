#pragma once
#include "CoreMinimal.h"
#include "RopeSegmentComponents.generated.h"

class UPhysicsConstraintComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FRopeSegmentComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* Constraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumActiveBones;
    
    GUNFIRERUNTIME_API FRopeSegmentComponents();
};

