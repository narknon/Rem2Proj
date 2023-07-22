#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "CharacterFacing.h"
#include "Conditions.h"
#include "FacingOverrideDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UFacingOverrideDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CharacterFacing NewFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneTimeCheck;
    
public:
    UFacingOverrideDecorator();
};

