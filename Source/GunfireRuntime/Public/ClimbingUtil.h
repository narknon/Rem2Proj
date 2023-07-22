#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EClimbDirectionBias.h"
#include "ClimbingUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UClimbingUtil : public UObject {
    GENERATED_BODY()
public:
    UClimbingUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EClimbDirectionBias GetOppositeSide(EClimbDirectionBias Side);
    
};

