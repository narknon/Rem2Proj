#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.h"
#include "InheritableNamedAsset.h"
#include "ImageSet.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UImageSet : public UInheritableNamedAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDevice PrimaryDevice;
    
    UImageSet();
};

