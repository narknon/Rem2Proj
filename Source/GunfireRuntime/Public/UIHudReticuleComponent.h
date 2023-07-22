#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "EDisabledWeaponVisuals.h"
#include "EReticuleDrawMode.h"
#include "Templates/SubclassOf.h"
#include "UIHudComponent.h"
#include "UIHudReticuleComponent.generated.h"

class AActor;
class ACharacterGunfire;
class ARangedWeapon;
class UItemType;
class UReticule;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UUIHudReticuleComponent : public UUIHudComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReticuleDrawMode DrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReticule* DefaultReticule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HitColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HitCriticalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitIndicatorSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisabledWeaponVisuals DisabledWeaponVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitToAimAssistRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhostReticuleSmoothingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGhostReticuleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterToGhostReticuleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowGhostReticuleOnCharacters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterGunfire* CachedCharacter;
    
public:
    UUIHudReticuleComponent();
    UFUNCTION(BlueprintCallable)
    void ShowHitIndicator(bool bIsCritical);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyHitTarget(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARangedWeapon* GetRangedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimable() const;
    
};

