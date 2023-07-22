#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "RebindedInputAxis.generated.h"

USTRUCT(BlueprintType)
struct FRebindedInputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AddedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> RemovedKeys;
    
    GUNFIRERUNTIME_API FRebindedInputAxis();
};

