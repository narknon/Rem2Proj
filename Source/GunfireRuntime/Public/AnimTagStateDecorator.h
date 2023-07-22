#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "AnimTagStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAnimTagStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimationTags;
    
public:
    UAnimTagStateDecorator();
};

