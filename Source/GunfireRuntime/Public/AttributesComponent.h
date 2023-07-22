#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Attribute.h"
#include "AttributeLevel.h"
#include "OnAttributeIncreasedDelegateDelegate.h"
#include "OnPreviewDelegateDelegate.h"
#include "AttributesComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAttributesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttribute> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Attributes, meta=(AllowPrivateAccess=true))
    TArray<FAttributeLevel> AttributeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributePointsPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AttributePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AttributePointsSpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributePointsStats;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewDelegate OnBeginPreview;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewDelegate OnEndPreview;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewDelegate OnPreviewStats;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeIncreasedDelegate OnPreAttributeIncreased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeIncreasedDelegate OnPostAttributeIncreased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewAttributePointsSpent;
    
public:
    UAttributesComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetAttributePoints(int32 AvailablePoints);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttributeLevel(const FName& ID, int32 LevelToSet);
    
    UFUNCTION(BlueprintCallable)
    void PreviewIncreaseAttribute(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void PreviewDecreaseAttribute(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void PreviewCommit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Attributes();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void OnComputeStats();
    
    UFUNCTION(BlueprintCallable)
    void OnComputeDerivedStats();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPreviewing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void IncreaseAttribute(const FName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviewStatValue(const FName& Stat, bool ApplyMod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviewAvailableAttributePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviewAttributeLevel(const FName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableAttributePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributeLevel(const FName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributeCost(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    FAttribute GetAttributeByID(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void EndPreview();
    
    UFUNCTION(BlueprintCallable)
    void BeginPreview();
    
};

