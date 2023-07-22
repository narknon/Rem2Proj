#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PooledItem.generated.h"

UCLASS(Blueprintable)
class UPooledItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Value;
    
    UPooledItem();
};

