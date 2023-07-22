#pragma once
#include "CoreMinimal.h"
#include "StatData.h"
#include "WeaponStatData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FWeaponStatData : public FStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    FWeaponStatData();
};

