#pragma once
#include "CoreMinimal.h"
#include "Dialog.generated.h"

class UEventTree;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventTree* EventTree;
    
    FDialog();
};

