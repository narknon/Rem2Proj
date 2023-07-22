#pragma once
#include "CoreMinimal.h"
#include "EInteractiveHost.h"
#include "EInteractiveResult.h"
#include "StateID.h"
#include "StateInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStateInfo : public FStateID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveHost InteractiveHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveResult InteractiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractiveOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractiveMashValue;
    
    GUNFIRERUNTIME_API FStateInfo();
};

