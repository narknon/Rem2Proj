#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "ContextualDialogTrigger.generated.h"

class UContextualDialogResponse;

UCLASS(Blueprintable)
class UContextualDialogTrigger : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UContextualDialogResponse*> Responses;
    
    UContextualDialogTrigger();
    
    // Fix for true pure virtual functions not being implemented
};

