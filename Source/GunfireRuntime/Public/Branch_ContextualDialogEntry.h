#pragma once
#include "CoreMinimal.h"
#include "Branch.h"
#include "Branch_ContextualDialogEntry.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBranch_ContextualDialogEntry : public UBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRange;
    
    UBranch_ContextualDialogEntry();
};

