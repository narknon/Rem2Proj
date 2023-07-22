#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "SoundGunfire.h"
#include "StatValue.h"
#include "WeakAudioComponentGunfire.h"
#include "ActionBuff.h"
#include "OnShieldDeltaDelegateDelegate.h"
#include "OnShieldHitDelegateDelegate.h"
#include "ActionShield.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class REMNANT_API UActionShield : public UActionBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldMax, meta=(AllowPrivateAccess=true))
    float ShieldMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldValue, meta=(AllowPrivateAccess=true))
    float ShieldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncomingDamageScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShieldedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysMatShieldMatParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysMatAnimationTweenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysMatAnimationExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldMaterialMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldMaterialMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeakAudioComponentGunfire TrackedActiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShieldBreakStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishActionOnBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatValue ShieldRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatValue ShieldRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatValue ShieldBrokenRegenDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldHitDelegate OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldDeltaDelegate OnShieldValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldDeltaDelegate OnShieldMaxChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldHitDelegate OnShieldBroken;
    
    UActionShield();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ShieldBreak();
    
    UFUNCTION(BlueprintCallable)
    void SetShieldValue(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldMax(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(FSoundGunfire SoundEvent, bool StoreSound);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldPct();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetShieldMax();
    
    UFUNCTION(BlueprintCallable)
    void DamageShieldMatAmount(float Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShieldHit();
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDelta(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDamage(UPARAM(Ref) FDamageInfo& ShieldDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void AnimateShieldChange(float From, float To);
    
};

