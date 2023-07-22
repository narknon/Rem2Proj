#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "RebindedInputAction.generated.h"

USTRUCT(BlueprintType)
struct FRebindedInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> AddedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> RemovedKeys;
    
    GUNFIRERUNTIME_API FRebindedInputAction();
};

