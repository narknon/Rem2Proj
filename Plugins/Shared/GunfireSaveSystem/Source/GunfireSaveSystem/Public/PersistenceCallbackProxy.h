#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PersistenceCallbackProxy.generated.h"

class UPersistenceManager;

UCLASS(Abstract, Blueprintable)
class UPersistenceCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPersistenceManager* PersistenceManager;
    
public:
    UPersistenceCallbackProxy();
};

