#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "SessionDetails.generated.h"

USTRUCT(BlueprintType)
struct FSessionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSessionResult Session;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Players;
    
    GUNFIREONLINEMODULE_API FSessionDetails();
};

