#pragma once
#include "CoreMinimal.h"
#include "HierarchicalEditInterface.h"
#include "InheritableAsset.h"
#include "InheritableNamedAsset.generated.h"

class UInheritableNamedObject;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UInheritableNamedAsset : public UInheritableAsset, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInheritableNamedObject*> Entries;
    
    UInheritableNamedAsset();
    
    // Fix for true pure virtual functions not being implemented
};

