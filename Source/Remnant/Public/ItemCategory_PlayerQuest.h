#pragma once
#include "CoreMinimal.h"
#include "ItemCategory_Quest.h"
#include "ItemCategory_PlayerQuest.generated.h"

UCLASS(Blueprintable)
class REMNANT_API UItemCategory_PlayerQuest : public UItemCategory_Quest {
    GENERATED_BODY()
public:
    UItemCategory_PlayerQuest();
};

