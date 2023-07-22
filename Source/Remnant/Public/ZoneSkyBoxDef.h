#pragma once
#include "CoreMinimal.h"
#include "VariableStatements.h"
#include "ZoneSkyBoxDef.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FZoneSkyBoxDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableStatements ValidateStatements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SkyBox;
    
    REMNANT_API FZoneSkyBoxDef();
};

