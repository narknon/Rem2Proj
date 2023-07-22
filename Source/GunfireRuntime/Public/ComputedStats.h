#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComputedStats.generated.h"

class AActor;
class UStatsComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UComputedStats : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatsComponent* StatsComponent;
    
public:
    UComputedStats();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ScaleValueByLevel(int32 Level, float Value, float Inc, float Exp) const;
    
    UFUNCTION(BlueprintCallable)
    void ScaleStat(FName Stat, float Scalar, bool AutoInitValue);
    
    UFUNCTION(BlueprintCallable)
    void PostComputeStats(UStatsComponent* Stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostComputeStats();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComputeStats();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComputeDerivedStats();
    
    UFUNCTION(BlueprintCallable)
    void ModifyStat(FName Stat, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStat(FName Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetStatsOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStat(FName Stat, bool ApplyMods);
    
    UFUNCTION(BlueprintCallable)
    void ComputeStats(UStatsComponent* Stats);
    
    UFUNCTION(BlueprintCallable)
    void ComputeDerivedStats(UStatsComponent* Stats);
    
};

