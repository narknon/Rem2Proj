#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SingleObjectPool.generated.h"

class UPooledItem;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USingleObjectPool : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPooledItem> ItemClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPooledItem*> Pool;
    
public:
    USingleObjectPool();
};

