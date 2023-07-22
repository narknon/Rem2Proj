#pragma once
#include "CoreMinimal.h"
#include "PlayStateEffect.h"
#include "PlayStateEffect_Input.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UPlayStateEffect_Input : public UPlayStateEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowsGameInput;
    
public:
    UPlayStateEffect_Input();
};

