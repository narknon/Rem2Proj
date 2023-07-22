#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventTreeContextObject.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UEventTreeContextObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UEventTreeContextObject();
};

