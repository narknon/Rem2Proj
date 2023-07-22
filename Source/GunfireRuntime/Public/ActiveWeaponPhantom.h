#pragma once
#include "CoreMinimal.h"
#include "ActiveWeaponPhantom.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActiveWeaponPhantom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Cause;
    
    GUNFIRERUNTIME_API FActiveWeaponPhantom();
};

