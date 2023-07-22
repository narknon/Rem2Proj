#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomGeometryType.h"
#include "WeaponPhantomShape.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FWeaponPhantomShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Primitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPhantomGeometryType Type;
    
    GUNFIRERUNTIME_API FWeaponPhantomShape();
};

