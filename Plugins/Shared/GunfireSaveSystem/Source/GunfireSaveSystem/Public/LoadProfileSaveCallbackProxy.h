#pragma once
#include "CoreMinimal.h"
#include "BlueprintLoadProfileSaveResultDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "LoadProfileSaveCallbackProxy.generated.h"

class ULoadProfileSaveCallbackProxy;
class UObject;

UCLASS(Blueprintable)
class ULoadProfileSaveCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintLoadProfileSaveResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintLoadProfileSaveResultDelegate OnFailure;
    
    ULoadProfileSaveCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadProfileSaveCallbackProxy* LoadProfileSave(UObject* WorldContextObject);
    
};

