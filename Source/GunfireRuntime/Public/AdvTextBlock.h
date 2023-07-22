#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/Widget.h"
#include "EInputDevice.h"
#include "OnTextFilledDelegate.h"
#include "OnWidgetReadyDelegate.h"
#include "AdvTextBlock.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAdvTextBlock : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextFilled OnTextFilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetReady OnWidgetReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextFilled OnPageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FillInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RebuildAfterDeviceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartFillIn;
    
    UAdvTextBlock();
    UFUNCTION(BlueprintCallable)
    void StartTextFill(bool bStartFromBeginning);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& newText, float NewFillSpeed, bool bShouldAutoStartFillIn);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float InLineHeightPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(int32 Page);
    
    UFUNCTION(BlueprintCallable)
    void PauseTextFill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeviceChanged(int32 ControllerId, EInputDevice NewDevice);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextFillPaused() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPages() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRecompute();
    
    UFUNCTION(BlueprintCallable)
    FVector2D ComputeDesiredSize();
    
    UFUNCTION(BlueprintCallable)
    void CompleteTextFill();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

