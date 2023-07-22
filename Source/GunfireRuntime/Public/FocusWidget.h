#pragma once
#include "CoreMinimal.h"
#include "OnAdvButtonClickedEventDelegate.h"
#include "OnAdvButtonPressedEventDelegate.h"
#include "OnAdvButtonReleasedEventDelegate.h"
#include "OnButtonClickedContextEventDelegate.h"
#include "OnInputActionDelegateDelegate.h"
#include "OnNavigationDelegateDelegate.h"
#include "UserWidgetGunfire.h"
#include "FocusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UFocusWidget : public UUserWidgetGunfire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAdvButtonClickedEvent OnFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAdvButtonClickedEvent OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedContextEvent OnClickedContext;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAdvButtonPressedEvent OnPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAdvButtonReleasedEvent OnReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionDelegate OnKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavigationDelegate OnNavigate;
    
    UFocusWidget();
    UFUNCTION(BlueprintCallable)
    void SetInactiveFocus();
    
    UFUNCTION(BlueprintCallable)
    void Remove();
    
    UFUNCTION(BlueprintCallable)
    void Focus();
    
    UFUNCTION(BlueprintCallable)
    void ClearFocus();
    
};

