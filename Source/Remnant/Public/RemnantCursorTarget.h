#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAnimationState.h"
#include "Components/Border.h"
#include "Components/SlateWrapperTypes.h"
#include "OnCursorTargetEventDelegate.h"
#include "RemnantCursorTarget.generated.h"

class URemnantCursorPanel;

UCLASS(Blueprintable)
class REMNANT_API URemnantCursorTarget : public UBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravitySpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GravityAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGravityDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrictionOverrideActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFrictionMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorTargetEvent OnCursorEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorTargetEvent OnCursorExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorTargetEvent OnCursorHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorTargetEvent OnBeginSnapToTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URemnantCursorPanel*> ParentPanels;
    
public:
    URemnantCursorTarget();
    UFUNCTION(BlueprintCallable)
    void ForceRefreshCachedVisibility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CatchWidgetAnimStateChange(EAnimationState AnimState);
    
    UFUNCTION(BlueprintCallable)
    void CatchRootVisibilityUpdate(ESlateVisibility NewVisibility, ESlateVisibility PrevVisibility);
    
};

