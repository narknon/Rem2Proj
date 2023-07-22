#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "ActorCustomizationMaterialParam.h"
#include "GlobalMaterialCustomization.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGlobalMaterialCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorCustomizationMaterialParam Param;
    
    UGlobalMaterialCustomization();
};

