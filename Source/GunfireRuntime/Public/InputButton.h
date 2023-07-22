#pragma once
#include "CoreMinimal.h"
#include "InputFilterMethod.h"
#include "InputButton.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FInputButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputFilterMethod Filter;
    
    FInputButton();
};

