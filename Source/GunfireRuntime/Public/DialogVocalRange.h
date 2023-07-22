#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogVocalRange.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UDialogVocalRange : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UDialogVocalRange();
};

