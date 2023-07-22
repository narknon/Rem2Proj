#pragma once
#include "CoreMinimal.h"
#include "SaveGameProfile.h"
#include "AccountCurrencyInstance.h"
#include "ArchetypeEntitlement.h"
#include "ItemEntitlement.h"
#include "Templates/SubclassOf.h"
#include "RemnantSaveGameProfile.generated.h"

class AItem;
class AQuest;
class UAccountAward;
class URemnantArchetype;
class USavedCharacter;

UCLASS(Blueprintable)
class REMNANT_API URemnantSaveGameProfile : public USaveGameProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<USavedCharacter*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActiveCharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasEverCompletedIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNeedsCheatedSaveConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAccountAward>> AccountAwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArchetypeEntitlement> ArchetypeEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEntitlement> ItemEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAccountCurrencyInstance> AccountCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SurvivalBossesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SurvivalCoopBossesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SurvivalItemsAcquired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AQuest>, int32> SurvivalMiniBossQuestsCompleteMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AQuest>, int32> SurvivalWorldBossQuestsCompleteMap;
    
    URemnantSaveGameProfile();
    UFUNCTION(BlueprintCallable)
    bool UpdateAccountCurrency(TSubclassOf<AItem> CurrencyType, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    bool HasAccountAward(TSubclassOf<UAccountAward> Award);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<URemnantArchetype>> GetUnlockedArchetypes(bool bIncludedEntitledArchetypes);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAccountCurrencyForItemType(TSubclassOf<AItem> CurrencyType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHasEverCompletedIntro();
    
};

