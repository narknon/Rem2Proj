#pragma once
#include "CoreMinimal.h"
#include "DamageSourceInterface.h"
#include "EquipmentModData.h"
#include "InspectInfo.h"
#include "Item.h"
#include "Templates/SubclassOf.h"
#include "EquipmentMod.generated.h"

class AActor;
class AEquipment;
class AEquipmentMod;
class UInventoryComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AEquipmentMod : public AItem, public IDamageSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicateMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomizationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomizationID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEquipment* EquipOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 EquippedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 EquippedLevel;
    
public:
    AEquipmentMod();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static bool UnequipMod(UInventoryComponent* Inventory, int32 ItemId, uint8 Slot, bool AddToInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ScaleStat(FName Stat, float Scalar, bool AutoInitValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostComputeStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentInHandEvent(bool InHand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetached();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComputeStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ModifyStat(FName Stat, float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasItemOrEquippedMod(UInventoryComponent* Inventory, TSoftClassPtr<AItem> ItemBP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStat(FName Stat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSlot() const;
    
    UFUNCTION(BlueprintCallable)
    static FInspectInfo GetPreviewInspectInfoFromInventory(AActor* Actor, UInventoryComponent* Inventory, int32 ItemId, uint8 Slot, int32 ModItemID);
    
    UFUNCTION(BlueprintCallable)
    static FInspectInfo GetPreviewInspectInfo(AActor* Actor, UInventoryComponent* Inventory, int32 ItemId, uint8 Slot, TSubclassOf<AEquipmentMod> Mod, uint8 ModLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInspectInfoForModBySlotName(AActor* Actor, UInventoryComponent* Inventory, int32 ItemId, FName Slot, FInspectInfo& Rtn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEquipment* GetEquipment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindEquippedModInInventory(UInventoryComponent* Inventory, TSoftClassPtr<AItem> Mod, int32& OutItemID, FEquipmentModData& OutModData);
    
    UFUNCTION(BlueprintCallable)
    static bool EquipModFromInventory(UInventoryComponent* Inventory, int32 ItemId, uint8 Slot, int32 ModItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool EquipMod(UInventoryComponent* Inventory, int32 ItemId, uint8 Slot, TSubclassOf<AEquipmentMod> Mod, uint8 ModLevel, int32 ModItemID);
    
    
    // Fix for true pure virtual functions not being implemented
};

