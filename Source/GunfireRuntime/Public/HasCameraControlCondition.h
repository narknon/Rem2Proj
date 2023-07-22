#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "HasCameraControlCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasCameraControlCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresFullControl;
    
public:
    UHasCameraControlCondition();
};

