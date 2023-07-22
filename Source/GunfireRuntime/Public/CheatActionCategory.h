#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "CheatActionCategory.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCheatActionCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> InputActions;
    
    FCheatActionCategory();
};

