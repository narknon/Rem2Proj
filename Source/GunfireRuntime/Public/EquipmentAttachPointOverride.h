#pragma once
#include "CoreMinimal.h"
#include "EquipmentAttachPointOverride.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentAttachPointOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachParentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointOverride;
    
    GUNFIRERUNTIME_API FEquipmentAttachPointOverride();
};

