#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "StatInfoSet.generated.h"

class UStatInfo;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStatInfoSet : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStatInfo*> Stats;
    
public:
    UStatInfoSet();
    
    // Fix for true pure virtual functions not being implemented
};

