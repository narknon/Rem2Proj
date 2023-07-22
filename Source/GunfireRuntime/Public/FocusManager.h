#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FocusInfo.h"
#include "TabFocusInfo.h"
#include "FocusManager.generated.h"

class APlayerController;
class UFocusButtonWidget;
class UFocusManInputAxisHandler;
class UFocusManInputHandler;
class UFocusManager;
class UInputComponent;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UFocusManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFocusInfo CurrentFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFocusInfo LastLostFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFocusInfo> DirtyFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTabFocusInfo TabFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFocusInfo> FocusStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTabFocusInfo> TabFocusStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> CurrentWidgetStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFocusManInputHandler*> InputActionBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFocusManInputAxisHandler*> InputAxisBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GivenSoleFocus;
    
public:
    UFocusManager();
    UFUNCTION(BlueprintCallable)
    static bool RestorePanelFocus(APlayerController* Controller, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFocus();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFocus();
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetWidgetByName(UWidget* Widget, const FName& WidgetName);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetRoot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetParent(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static UFocusManager* GetInstance(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool FocusFirstAvailable(APlayerController* Controller, UWidget* Widget, int32 UserIndex, UWidget* OriginalWidget);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* FindWidgetByName(UWidget* Widget, const FName& WidgetName);
    
    UFUNCTION(BlueprintCallable)
    void EnableInput(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DisableInput(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool AttemptSetButtonFocus(APlayerController* Controller, UFocusButtonWidget* Widget);
    
};

