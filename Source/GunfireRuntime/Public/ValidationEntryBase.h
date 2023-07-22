#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "ValidationEntryBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UValidationEntryBase : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UValidationEntryBase();
    
    // Fix for true pure virtual functions not being implemented
};

