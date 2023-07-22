#pragma once
#include "CoreMinimal.h"
#include "SceneCustomization.h"
#include "SetVisibilityCustomization.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USetVisibilityCustomization : public USceneCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideWeaponSwitching;
    
    USetVisibilityCustomization();
};

