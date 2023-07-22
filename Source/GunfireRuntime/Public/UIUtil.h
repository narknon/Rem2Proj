#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TextFormatTokenPair.h"
#include "UIUtil.generated.h"

class UWidget;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UUIUtil : public UObject {
    GENERATED_BODY()
public:
    UUIUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldBeVisible(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshTooltipVisibility(bool bCanSpawnNewTooltip);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshCursorVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void IsTearingDown(UObject* WorldContextObject, bool& NewIsTearingDown);
    
    UFUNCTION(BlueprintCallable)
    static void GetWidgetsByClass(UWidget* Widget, UClass* Class, TArray<UWidget*>& OutWidgets);
    
    UFUNCTION(BlueprintCallable)
    static void FormatText(UPARAM(Ref) FText& OutText, const TArray<FTextFormatTokenPair>& FormatTokens);
    
};

