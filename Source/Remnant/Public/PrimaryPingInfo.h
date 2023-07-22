#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrimaryPingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPrimaryPingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundSetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WorldIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor WorldObjectColor;
    
    REMNANT_API FPrimaryPingInfo();
};

