#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecipeInfo.h"
#include "CachedValidationInfo.h"
#include "QueuedExceptionInfo.h"
#include "Templates/SubclassOf.h"
#include "ValidationRule.h"
#include "ValidationSearchEntry.h"
#include "RemnantValidationComponent.generated.h"

class AActor;
class AItem;
class UInventoryComponent;
class URemnantProgressionComponent;
class URemnantTraitsComponent;
class URemnantValidationManager;
class UTrait;
class UValidationTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantValidationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UValidationTable* ValidationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExceptionTimeOutSeconds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URemnantValidationManager* ValidationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LocalValidationPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedValidationInfo CachedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FValidationSearchEntry, FValidationRule> Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FQueuedExceptionInfo> ExceptionQueue;
    
public:
    URemnantValidationComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void ValidateTraits(URemnantTraitsComponent* CachedTraits);
    
    UFUNCTION(BlueprintCallable)
    void ValidateProgression(URemnantProgressionComponent* CachedProgression);
    
    UFUNCTION(BlueprintCallable)
    void ValidateInventory(UInventoryComponent* CachedInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnItemInstanceDataUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ExceptionTimeOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTraitException(TSubclassOf<UTrait> TraitBP, int32 LevelChange, bool bIsRemovingTrait);
    
    UFUNCTION(BlueprintCallable)
    void AddSoftTraitException(TSoftClassPtr<UTrait> SoftTraitBP, int32 LevelChange, bool bIsRemovingTrait);
    
    UFUNCTION(BlueprintCallable)
    void AddSoftItemException(TSoftClassPtr<AItem> SoftItemBP, int32 QuantityChange, int32 LevelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddProgressionException(int32 LevelChange, int32 ExperienceChange);
    
    UFUNCTION(BlueprintCallable)
    void AddItemException(TSubclassOf<AItem> ItemBP, int32 QuantityChange, int32 LevelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipmentModException(int32 ModID, bool bIsEquipping);
    
    UFUNCTION(BlueprintCallable)
    void AddCraftingRecipeExceptions(const FRecipeInfo& RecipeInfo, int32 UpgradeItemID);
    
};

