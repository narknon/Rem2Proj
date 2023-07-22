#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "CheatActionCategory.h"
#include "CheatCommandDetails.h"
#include "CheatInputAction.h"
#include "CheatManagerDelegateDelegate.h"
#include "CheatManagerTimedEventDelegateDelegate.h"
#include "ECheatExecutionType.h"
#include "PendingCheatInputInstanceData.h"
#include "CheatManagerGunfireBase.generated.h"

class AUIActor;
class UFlymodeInputWidget;
class UInputComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UCheatManagerGunfireBase : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatManagerTimedEventDelegate OnCheatManagerTogglePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatManagerDelegate OnAfterCheatExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FPendingCheatInputInstanceData> PendingSetTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* CheatInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIActor* SpawnedUIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlymodeInputWidget* FlyWidget;
    
public:
    UCheatManagerGunfireBase();
    UFUNCTION(BlueprintCallable)
    void ToggleFlyCheatWaypointDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFlyCheatDialog();
    
    UFUNCTION(BlueprintCallable)
    void ShowFlyCheatDialog(bool bShowPreview);
    
    UFUNCTION(BlueprintCallable)
    void RequestShowGlobalCheatDialog();
    
    UFUNCTION(BlueprintCallable)
    void RequestShowCheatDialog(TSoftClassPtr<AUIActor> SoftDialogClass);
    
    UFUNCTION(BlueprintCallable)
    void RequestCloseCheatManagerMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUseGlobalCheatMenuKey(bool bDown, FInputActionKeyMapping KeyMapping);
    
    UFUNCTION(BlueprintCallable)
    void OnUseAnyKeyDuringCheat();
    
    UFUNCTION(BlueprintCallable)
    void OnShowGlobalCheatMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseDebugCommandKey();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsThumbstick(const FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadButton(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void HideFlyCheatDialog(bool ShowPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeyDisplayShortName(const FKey Key);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCheatActionCategory> GetGlobalCheatCategories();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FCheatInputAction> GetFlymodeCheats();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetExecCheatCommandDetails(const FName ActionName, FCheatCommandDetails& DETAILS) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetConsoleCheat(const FName ActionName, FCheatInputAction& Cheat) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetCheatSelectionFromInput(const FCheatActionCategory& Category, FCheatInputAction& ActionOut);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FCheatInputAction> GetCheatsByCategory(const FCheatActionCategory& Category);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheatInputActionByName(FName CheatName, FCheatInputAction& ActionOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECheatExecutionType GetCheatExecutionType(const FName CheatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheatCategoryByName(FName CategoryName, FCheatActionCategory& CategoryOut) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FCheatActionCategory> GetCategorySelectionFromInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCheatInputAction> GetAllCheats();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    bool ExecuteCheat(FName ActionName, TArray<FString> OptionalParameters);
    
    UFUNCTION(BlueprintCallable)
    bool EnableGlobalCheats();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableCheatLockout(const FKey Key);
    
private:
    UFUNCTION(BlueprintCallable)
    void DoExecuteCheat(const FCheatInputAction& CheatAction, TArray<FString> OptionalParameters);
    
    UFUNCTION(BlueprintCallable)
    void DisableGlobalCheats();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableCheatLockout(const bool bFlush);
    
    UFUNCTION(BlueprintCallable)
    void BindCheatKeyDetection(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreCheatsEnabled();
    
};

