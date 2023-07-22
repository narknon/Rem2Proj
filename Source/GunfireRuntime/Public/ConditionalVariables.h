#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionalVariableDef.h"
#include "ConditionalVariables.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UConditionalVariables : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalVariableDef> Variables;
    
    UConditionalVariables();
};

