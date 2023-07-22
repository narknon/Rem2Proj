#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HierarchicalEditInterface.h"
#include "VariableDef.h"
#include "ContextualDialogSet.generated.h"

class UContextualDialogTrigger;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UContextualDialogSet : public UDataAsset, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UContextualDialogTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableDef> Variables;
    
public:
    UContextualDialogSet();
    
    // Fix for true pure virtual functions not being implemented
};

