#pragma once
#include "CoreMinimal.h"
#include "BlueprintLoadSaveResultDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "LoadSaveCallbackProxy.generated.h"

class ULoadSaveCallbackProxy;
class UObject;

UCLASS(Blueprintable)
class ULoadSaveCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintLoadSaveResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintLoadSaveResultDelegate OnFailure;
    
    ULoadSaveCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadSaveCallbackProxy* LoadSave(UObject* WorldContextObject, int32 Slot);
    
};

