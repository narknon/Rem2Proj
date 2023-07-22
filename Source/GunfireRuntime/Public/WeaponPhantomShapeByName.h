#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomGeometryType.h"
#include "WeaponPhantomShapeByName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponPhantomShapeByName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPhantomGeometryType Type;
    
    GUNFIRERUNTIME_API FWeaponPhantomShapeByName();
};

