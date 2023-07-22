#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "SoundTagStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USoundTagStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SoundTags;
    
public:
    USoundTagStateDecorator();
};

