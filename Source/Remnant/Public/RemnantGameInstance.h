#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.h"
#include "GameInstanceGunfire.h"
#include "ERemnantDemoMode.h"
#include "RemnantGameInstance.generated.h"

class URemnantCharacterManager;

UCLASS(Blueprintable, NonTransient)
class REMNANT_API URemnantGameInstance : public UGameInstanceGunfire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemnantCharacterManager* CharacterManager;
    
    URemnantGameInstance();
    UFUNCTION(BlueprintCallable)
    void OnOnlinePrivilegeChecked();
    
    UFUNCTION(BlueprintCallable)
    void OnMainMenuLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDeviceChanged(int32 ControllerId, EInputDevice NewDevice);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActiveProfileSet();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDemo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Host();
    
    UFUNCTION(BlueprintCallable)
    ERemnantDemoMode GetDemoMode();
    
    UFUNCTION(BlueprintCallable)
    void DoAuth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckConnectionStatusChanges();
    
};

