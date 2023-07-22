#pragma once
#include "CoreMinimal.h"
#include "ImpactDescriptorSet.h"
#include "ImpactEffectDescriptor.h"
#include "ImpactDescriptorCharacterSet.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FImpactDescriptorCharacterSet : public FImpactDescriptorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactEffectDescriptor DefaultImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactEffectDescriptor DefaultBlock;
    
    FImpactDescriptorCharacterSet();
};

