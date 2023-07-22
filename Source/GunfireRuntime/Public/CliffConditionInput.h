#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CliffConditionInput.generated.h"

class ACharacterGunfire;
class UCliffConditionParams;

USTRUCT(BlueprintType)
struct FCliffConditionInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterGunfire* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCliffConditionParams> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCliffConditionParams* CliffParams;
    
    GUNFIRERUNTIME_API FCliffConditionInput();
};

