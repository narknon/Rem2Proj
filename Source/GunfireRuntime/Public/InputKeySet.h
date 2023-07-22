#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "InputKeySet.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FInputKeySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnRelease;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionMappings;
    
    FInputKeySet();
};

