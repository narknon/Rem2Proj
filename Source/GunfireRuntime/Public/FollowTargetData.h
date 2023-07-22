#pragma once
#include "CoreMinimal.h"
#include "FollowTargetData.generated.h"

class ACharacterGunfire;

USTRUCT(BlueprintType)
struct FFollowTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterGunfire* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACharacterGunfire*> FollowingCharacters;
    
    GUNFIRERUNTIME_API FFollowTargetData();
};

