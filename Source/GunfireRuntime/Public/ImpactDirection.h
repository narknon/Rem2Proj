#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ImpactDirection.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UImpactDirection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UImpactDirection();
};

