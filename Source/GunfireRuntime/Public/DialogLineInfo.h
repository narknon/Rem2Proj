#pragma once
#include "CoreMinimal.h"
#include "DialogLineInfo.generated.h"

class UDialogEntry;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FDialogLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogEntry* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LineIndex;
    
    FDialogLineInfo();
};

