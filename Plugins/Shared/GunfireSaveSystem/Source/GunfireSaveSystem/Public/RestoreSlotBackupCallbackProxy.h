#pragma once
#include "CoreMinimal.h"
#include "BlueprintSaveNoRetDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "RestoreSlotBackupCallbackProxy.generated.h"

class UObject;
class URestoreSlotBackupCallbackProxy;

UCLASS(Blueprintable)
class URestoreSlotBackupCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate OnFailure;
    
    URestoreSlotBackupCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URestoreSlotBackupCallbackProxy* RestoreSlotBackup(UObject* WorldContextObject, int32 Slot);
    
};

