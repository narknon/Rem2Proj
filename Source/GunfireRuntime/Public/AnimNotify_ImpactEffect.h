#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "EAnimImpactTraceDirection.h"
#include "EAnimImpactType.h"
#include "GunfireAudioPlayParams.h"
#include "AnimNotify_ImpactEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_ImpactEffect : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimImpactType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunfireAudioPlayParams AudioPlayParams;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimImpactTraceDirection TraceDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpTraceOffset;
    
    UAnimNotify_ImpactEffect();
};

