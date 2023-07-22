#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ETagLocation.h"
#include "TagCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTagCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETagLocation LocationOfTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllOrNothing;
    
public:
    UTagCondition();
};

