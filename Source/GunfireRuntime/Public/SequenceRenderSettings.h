#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequenceRenderSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIRERUNTIME_API USequenceRenderSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CVars;
    
    USequenceRenderSettings();
};

