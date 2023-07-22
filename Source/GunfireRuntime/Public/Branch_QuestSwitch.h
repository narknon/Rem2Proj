#pragma once
#include "CoreMinimal.h"
#include "Branch.h"
#include "EQuestSwitchResult.h"
#include "Branch_QuestSwitch.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBranch_QuestSwitch : public UBranch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestSwitchResult ValidForState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidObjectives;
    
public:
    UBranch_QuestSwitch();
};

