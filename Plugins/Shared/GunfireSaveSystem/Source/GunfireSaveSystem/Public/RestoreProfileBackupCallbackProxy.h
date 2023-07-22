#pragma once
#include "CoreMinimal.h"
#include "BlueprintSaveNoRetDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "RestoreProfileBackupCallbackProxy.generated.h"

class UObject;
class URestoreProfileBackupCallbackProxy;

UCLASS(Blueprintable)
class URestoreProfileBackupCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate OnFailure;
    
    URestoreProfileBackupCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URestoreProfileBackupCallbackProxy* RestoreProfileBackup(UObject* WorldContextObject);
    
};

