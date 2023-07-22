#pragma once
#include "CoreMinimal.h"
#include "CheatCommandDetails.h"
#include "CheatCommands.generated.h"

USTRUCT(BlueprintType)
struct FCheatCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FCheatCommandDetails> CheatCommandDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CheatCommands;
    
    GUNFIRERUNTIME_API FCheatCommands();
};

