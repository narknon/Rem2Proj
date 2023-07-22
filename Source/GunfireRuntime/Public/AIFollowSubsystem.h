#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FollowTargetData.h"
#include "AIFollowSubsystem.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIFollowSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFollowTargetData> FollowTargets;
    
    UAIFollowSubsystem();
};

