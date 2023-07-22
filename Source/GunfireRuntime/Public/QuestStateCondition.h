#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EQuestState.h"
#include "QuestStateCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UQuestStateCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState QuestState;
    
public:
    UQuestStateCondition();
};

