#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AudioComponentGunfire.h"
#include "ManagedTickInterface.h"
#include "Templates/SubclassOf.h"
#include "WaterFXEntry.h"
#include "WaterFXOverride.h"
#include "WaterOverlapEventDelegate.h"
#include "WaterFXComponent.generated.h"

class UNiagaraComponent;
class UPhysicsBoundsType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UWaterFXComponent : public UActorComponent, public IManagedTickInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterEnterFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterWakeFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterExitFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactFXThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXOverride> Overrides;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterOverlapEvent OnEnterWater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterOverlapEvent OnExitWater;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhysicsBoundsType> LastWaterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WakeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAudioComponentGunfire WakeSFX;
    
public:
    UWaterFXComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPhysicsBoundsType> GetWaterType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubmergeDepth() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

