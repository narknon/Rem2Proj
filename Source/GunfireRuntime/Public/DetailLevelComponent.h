#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DetailLevelChangedDelegateDelegate.h"
#include "EDetailPriority.h"
#include "DetailLevelComponent.generated.h"

class UGameUserSettingsGunfire;
class UUserSetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UDetailLevelComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetailLevelChangedDelegate OnDetailChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetailPriority Priority;
    
    UDetailLevelComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDetailLevel(UUserSetting* AppliedSetting, UGameUserSettingsGunfire* UserSettings);
    
    UFUNCTION(BlueprintCallable)
    void SettingsRebuilt(UGameUserSettingsGunfire* UserSettings);
    
};

