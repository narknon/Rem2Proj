#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GunfireAnalogCursorManager.h"
#include "OnAnalogCursorStateChangedDelegate.h"
#include "RemnantAnalogCursorManager.generated.h"

class UObject;
class URemnantAnalogCursorManager;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantAnalogCursorManager : public UGunfireAnalogCursorManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnalogCursorStateChanged OnAnalogCursorStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* CachedSnapWidget;
    
public:
    URemnantAnalogCursorManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCachedCursorLockMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void SnapToWidget(UUserWidget* WidgetToSnap, bool bUseCursorTarget, const FVector2D& OverrideSnapPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URemnantAnalogCursorManager* GetInstance(const UObject* WorldContextObject);
    
};

