#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "EAwarenessSignal.h"
#include "EAwarenessSource.h"
#include "AnimNotify_Awareness.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_Awareness : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAwarenessSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAwarenessSignal SignalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UAnimNotify_Awareness();
};

