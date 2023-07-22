#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VariableDef.h"
#include "Variables.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UVariables : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextAlias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRegisterContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableDef> Variables;
    
    UVariables();
};

