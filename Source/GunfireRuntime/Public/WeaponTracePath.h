#pragma once
#include "CoreMinimal.h"
#include "GunfireTraceParams.h"
#include "WeaponTraceSegment.h"
#include "WeaponTracePath.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTracePath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponTraceSegment> Segments;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunfireTraceParams Critera;
    
    GUNFIRERUNTIME_API FWeaponTracePath();
};

