#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "EquipmentMod.h"
#include "RangedWeaponMode.h"
#include "EModInputMode.h"
#include "LoadableModAsset.h"
#include "MinionSummonableInterface.h"
#include "RemnantWeaponMod.generated.h"

class ARemnantRangedWeapon;
class UObject;

UCLASS(Blueprintable)
class REMNANT_API ARemnantWeaponMod : public AEquipmentMod, public IMinionSummonableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviewAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStowWeaponForPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAllChargesOnConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSecondaryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresAllowActionForUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModUsageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlocksActionsWhileInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangedWeaponMode WeaponMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeactivateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseEndAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseCrouchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStowWeaponForUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveImpactEffectOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveImpactEffectOverlayOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharacterAnimTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadableModAsset> Assets;
    
public:
    ARemnantWeaponMod();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowReticule();
    
    UFUNCTION(BlueprintCallable)
    void SetMinHoldTime(float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCustomIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviewEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreFireEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreFireBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFireEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFireBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFire(const FVector& From, const FVector& To, float WeaponSpread);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadingAssets();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCustomIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargesChanged(int32 Charges);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterHitTarget(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginUse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    void ModifyModPower(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseState(FName State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetWindupProgress(const float TimePassed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetWindupOverdrawnProgress(const float TimePassed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARemnantRangedWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUseState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerBasis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetModAssetAsClass(FName AssetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetModAsset(FName AssetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetModActiveRemainingPct();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClientAimVector(FVector& AimOrigin, FVector& AimEnd);
    
    UFUNCTION(BlueprintCallable)
    void DoInstantHit(const FVector& Origin, const FVector& End, float WeaponSpread);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUse(bool IsSecondaryActivation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDeactivateMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CalculateClientAimVector(FVector& AimOrigin, FVector& AimEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAssetsLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageInfoToModPower(const FDamageInfo& DamageInfo, float ModPowerScalar, bool bForce, bool bIgnorePenalties, bool bFillActiveMods);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddModPower(float Damage, float BonusModPowerMod, bool bFillActiveMods);
    
    
    // Fix for true pure virtual functions not being implemented
};

