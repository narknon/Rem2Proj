#pragma once
#include "CoreMinimal.h"
#include "LinkOccupant.generated.h"

class AActor;
class ULadderParams;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FLinkOccupant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULadderParams* LadderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRung;
    
    FLinkOccupant();
};

