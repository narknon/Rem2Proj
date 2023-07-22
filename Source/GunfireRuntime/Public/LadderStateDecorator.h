#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "LadderStateDecorator.generated.h"

class ULadderParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULadderParams> LadderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProjectLocationForAI;
    
public:
    ULadderStateDecorator();
};

