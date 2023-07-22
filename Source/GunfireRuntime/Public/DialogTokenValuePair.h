#pragma once
#include "CoreMinimal.h"
#include "DialogTokenValuePair.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FDialogTokenValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    FDialogTokenValuePair();
};

