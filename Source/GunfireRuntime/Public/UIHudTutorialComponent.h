#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/Anchors.h"
#include "Fonts/SlateFontInfo.h"
#include "TutorialPrompt.h"
#include "UIHudComponent.h"
#include "UIHudTutorialComponent.generated.h"

class AActor;
class UTexture2D;
class UTutorialComponent;
class UTutorialPromptWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UUIHudTutorialComponent : public UUIHudComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArrowScreenOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FontShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FontShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors PlayerPromptAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPlayerPrompts;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTutorialPromptWidget* PlayerPromptWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTutorialComponent* CachedTutorialComponent;
    
public:
    UUIHudTutorialComponent();
    UFUNCTION(BlueprintCallable)
    void OnShowPrompt(FName ID, AActor* Actor, const FTutorialPrompt& Prompt, float ExpirationTime);
    
    UFUNCTION(BlueprintCallable)
    void OnHidePrompt(FName ID, AActor* Actor, const FTutorialPrompt& Prompt, float ExpirationTime);
    
    UFUNCTION(BlueprintCallable)
    void OnClearPrompt(FName ID, AActor* Actor, const FTutorialPrompt& Prompt, float ExpirationTime);
    
};

