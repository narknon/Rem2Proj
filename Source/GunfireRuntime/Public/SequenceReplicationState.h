#pragma once
#include "CoreMinimal.h"
#include "SequenceReplicationState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSequenceReplicationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RequiredRepActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeID;
    
    FSequenceReplicationState();
};

