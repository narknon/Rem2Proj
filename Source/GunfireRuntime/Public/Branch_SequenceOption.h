#pragma once
#include "CoreMinimal.h"
#include "Branch.h"
#include "Branch_SequenceOption.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBranch_SequenceOption : public UBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UBranch_SequenceOption();
};

