#pragma once
#include "CoreMinimal.h"
#include "Branch.h"
#include "Branch_Subroutine.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBranch_Subroutine : public UBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubroutineID;
    
    UBranch_Subroutine();
};

