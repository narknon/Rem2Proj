#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EUIEaseType.h"
#include "UITweenFinishedEventDelegate.h"
#include "UITweenTimerDelegateDelegate.h"
#include "UITweenManager.generated.h"

class UCurveFloat;
class UObject;
class UUITweenManager;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UUITweenManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITweenFinishedEvent OnTweenFinished;
    
    UUITweenManager();
    UFUNCTION(BlueprintCallable)
    bool StopTween(int32 TweenID);
    
    UFUNCTION(BlueprintCallable)
    int32 StartTimer(float Time, const FUITweenTimerDelegate& Event);
    
    UFUNCTION(BlueprintCallable)
    int32 Size(UWidget* Widget, const FVector2D& DesiredSize, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 ScaleByCurve(UWidget* Widget, UCurveFloat* Curve, float Time, float Offset);
    
    UFUNCTION(BlueprintCallable)
    int32 Scale(UWidget* Widget, const FVector2D& DesiredScale, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveTo(UWidget* Widget, UWidget* ToWidget, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveRelative(UWidget* Widget, const FVector2D& Offset, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 Move(UWidget* Widget, const FVector2D& Destination, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTweenFinished(int32 TweenID) const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateHandle(UPARAM(Ref) int32& TweenHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUITweenManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 FlashColor(UWidget* Widget, FLinearColor FromColor, FLinearColor ToColor, float Time, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 ColorByCurve(UWidget* Widget, FLinearColor FromColor, FLinearColor ToColor, UCurveFloat* Curve, float Time);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateColor(UWidget* Widget, FLinearColor ToColor, float Time, EUIEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateAlpha(UWidget* Widget, float ToAlpha, float Time, EUIEaseType EaseType, float Exponent);
    
};

