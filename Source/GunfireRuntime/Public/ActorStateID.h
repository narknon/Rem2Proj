#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorStateID.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FActorStateID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    FActorStateID();
};

