#pragma once
#include "CoreMinimal.h"
#include "BlueprintSaveNoRetDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "HasProfileBackupCallbackProxy.generated.h"

class UHasProfileBackupCallbackProxy;
class UObject;

UCLASS(Blueprintable)
class UHasProfileBackupCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate HasBackup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate NoBackup;
    
    UHasProfileBackupCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHasProfileBackupCallbackProxy* HasProfileBackup(UObject* WorldContextObject);
    
};

