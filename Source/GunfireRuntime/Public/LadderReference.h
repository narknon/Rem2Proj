#pragma once
#include "CoreMinimal.h"
#include "LadderReference.generated.h"

class AActor;
class ULadderParams;

USTRUCT(BlueprintType)
struct FLadderReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Ladder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULadderParams* Params;
    
    GUNFIRERUNTIME_API FLadderReference();
};

