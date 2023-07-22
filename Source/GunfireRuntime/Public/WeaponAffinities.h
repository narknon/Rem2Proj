#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponAffinity.h"
#include "WeaponAffinities.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UWeaponAffinities : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAffinity> Affinities;
    
    UWeaponAffinities();
};

