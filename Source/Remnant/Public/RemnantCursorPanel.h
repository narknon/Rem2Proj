#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "ECursorPanelType.h"
#include "OnCursorPanelEventDelegate.h"
#include "RemnantCursorPanel.generated.h"

class URemnantCursorTarget;

UCLASS(Blueprintable)
class REMNANT_API URemnantCursorPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECursorPanelType CursorPanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravitySpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGravityDistanceNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionSpeedMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorPanelEvent OnCursorEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorPanelEvent OnCursorExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorPanelEvent OnCursorHover;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URemnantCursorTarget* CachedLastHoveredTarget;
    
public:
    URemnantCursorPanel();
    UFUNCTION(BlueprintCallable)
    void DeregisterCursorTarget(URemnantCursorTarget* Target);
    
};

