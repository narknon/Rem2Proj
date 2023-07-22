#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "VariableStatements.h"
#include "ContextualDialogResponse.generated.h"

UCLASS(Blueprintable)
class UContextualDialogResponse : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableStatements ValidateStatements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableStatements ExecuteStatements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Response;
    
    UContextualDialogResponse();
    
    // Fix for true pure virtual functions not being implemented
};

