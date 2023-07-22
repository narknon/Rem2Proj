#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "RemnantMaterialParam.h"
#include "RemnantWeaponMaterialCustomization.generated.h"

UCLASS(Blueprintable)
class REMNANT_API URemnantWeaponMaterialCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRemnantMaterialParam> MaterialChanges;
    
    URemnantWeaponMaterialCustomization();
};

