#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVitalityInitialValue.h"
#include "VitalityDelegateDelegate.h"
#include "VitalityComponent.generated.h"

class AActor;
class UVitalityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UVitalityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatRegenDelayScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatEmptyDelayScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatDeltaMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoNegativeChangeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVitalityInitialValue InitialValue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVitalityDelegate OnVitalityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Value, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UVitalityComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Reset(bool Notify);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Value();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidStatsComp() const;
    
    UFUNCTION(BlueprintCallable)
    static UVitalityComponent* GetVitality(AActor* Actor, FName Vitality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValuePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugInfo(int32 DebugLevel);
    
    UFUNCTION(BlueprintCallable)
    void ClearRegenDelay();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ApplyDeltaReplicated(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDelta(float Delta);
    
};

