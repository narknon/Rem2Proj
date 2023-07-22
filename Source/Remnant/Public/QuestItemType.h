#pragma once
#include "CoreMinimal.h"
#include "ItemType.h"
#include "QuestItemType.generated.h"

class ARemnantQuest;

UCLASS(Blueprintable)
class REMNANT_API UQuestItemType : public UItemType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARemnantQuest> Quest;
    
public:
    UQuestItemType();
};

