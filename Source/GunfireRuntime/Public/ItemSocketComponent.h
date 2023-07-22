#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ItemSocketEventDelegate.h"
#include "ItemSocketSlot.h"
#include "Templates/SubclassOf.h"
#include "UseItemInterface.h"
#include "ItemSocketComponent.generated.h"

class ACharacterGunfire;
class AItem;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UItemSocketComponent : public USceneComponent, public IUseItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FItemSocketSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Blocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSocketEvent OnItemSocketChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSocketEvent OnItemSocketed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSocketEvent OnItemUnsocketed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SocketedItem, meta=(AllowPrivateAccess=true))
    AItem* SocketedItem;
    
public:
    UItemSocketComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestReturnItemToInventory(ACharacterGunfire* Subject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestPickupAndEquip(ACharacterGunfire* Subject, bool bSetInHand);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestDetach();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventoryById(UInventoryComponent* Inventory, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventoryByClass(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventory(ACharacterGunfire* Subject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddExistingItem(AItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveItem();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SocketedItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValid(TSubclassOf<AItem> ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractableSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceFill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItemOfClass(TSubclassOf<AItem> ItemClass) const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddItem(TSubclassOf<AItem> ItemClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

