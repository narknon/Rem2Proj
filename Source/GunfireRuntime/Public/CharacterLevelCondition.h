#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CharacterLevelCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCharacterLevelCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCharacterLevel;
    
    UCharacterLevelCondition();
};

