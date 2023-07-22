#pragma once
#include "CoreMinimal.h"
#include "ActorStateID.h"
#include "EClimbingTransitionRequiredInput.h"
#include "ClimbTransition.generated.h"

USTRUCT(BlueprintType)
struct FClimbTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorStateID> ClimbingStates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbingTransitionRequiredInput RequiredInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMoveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMoveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentSurfaceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RequiredSurfaceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InvalidSurfaceTags;
    
    GUNFIRERUNTIME_API FClimbTransition();
};

