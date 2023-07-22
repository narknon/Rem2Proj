#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TutorialPrompts.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTutorialPrompts : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialPrompts;
    
    UTutorialPrompts();
};

