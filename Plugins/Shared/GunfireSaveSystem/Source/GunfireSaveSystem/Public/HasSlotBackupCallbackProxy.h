#pragma once
#include "CoreMinimal.h"
#include "BlueprintSaveNoRetDelegateDelegate.h"
#include "PersistenceCallbackProxy.h"
#include "HasSlotBackupCallbackProxy.generated.h"

class UHasSlotBackupCallbackProxy;
class UObject;

UCLASS(Blueprintable)
class UHasSlotBackupCallbackProxy : public UPersistenceCallbackProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate HasBackup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSaveNoRetDelegate NoBackup;
    
    UHasSlotBackupCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHasSlotBackupCallbackProxy* HasSlotBackup(UObject* WorldContextObject, int32 Slot);
    
};

