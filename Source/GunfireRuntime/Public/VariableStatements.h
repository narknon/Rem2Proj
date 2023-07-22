#pragma once
#include "CoreMinimal.h"
#include "VariableStatement.h"
#include "VariableStatements.generated.h"

USTRUCT(BlueprintType)
struct FVariableStatements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableStatement> Statements;
    
    GUNFIRERUNTIME_API FVariableStatements();
};

