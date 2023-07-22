#pragma once
#include "CoreMinimal.h"
#include "EClimbDirectionBias.h"
#include "ClimbAppendageSettings.generated.h"

USTRUCT(BlueprintType)
struct FClimbAppendageSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbDirectionBias Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
    GUNFIRERUNTIME_API FClimbAppendageSettings();
};

