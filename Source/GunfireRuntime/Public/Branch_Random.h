#pragma once
#include "CoreMinimal.h"
#include "Branch.h"
#include "Branch_Random.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBranch_Random : public UBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UBranch_Random();
};

