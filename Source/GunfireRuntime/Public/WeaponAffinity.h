#pragma once
#include "CoreMinimal.h"
#include "EWeaponAffinityType.h"
#include "WeaponAffinity.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAffinity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageBonusStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AffinityStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAffinityType AffinityType;
    
    GUNFIRERUNTIME_API FWeaponAffinity();
};

