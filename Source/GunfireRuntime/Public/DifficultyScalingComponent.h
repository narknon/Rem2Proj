#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultyScalingDelegateDelegate.h"
#include "DifficultyScalingComponent.generated.h"

class AActor;
class UDataTable;
class UDifficultyScalingComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UDifficultyScalingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyScalingDelegate OnDifficultyChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NumPlayersScalingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelScalingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DifficultyScalingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DifficultyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Invalidate, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Invalidate, meta=(AllowPrivateAccess=true))
    int32 LevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Invalidate, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideDifficultyScalingTable;
    
public:
    UDifficultyScalingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNumPlayers(int32 NewNumPlayers);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelOverride(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyScalingTableOverride(UDataTable* Table);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(int32 NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExternalStatModifier(FName Stat);
    
    UFUNCTION(BlueprintCallable)
    void Invalidate();
    
    UFUNCTION(BlueprintCallable)
    float GetSpawnQuantityScalar();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerStatusDamageScalar();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerBlightBuildUpScalar();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLevelForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemLevelForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    float GetExperienceScalar(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    float GetEnemyHealthScalar(AActor* Actor, FName Prefix);
    
    UFUNCTION(BlueprintCallable)
    float GetEnemyDamageScalar(AActor* Actor, FName Prefix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDifficultyScalingComponent* GetDifficultyScalingComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrencyScalar(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ComputeStats();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearExternalStatModifiers();
    
    UFUNCTION(BlueprintCallable)
    void ClearDifficultyScalingTableOverride();
    
    UFUNCTION(BlueprintCallable)
    void AddExternalStatModifier(FName Stat, float Value);
    
};

