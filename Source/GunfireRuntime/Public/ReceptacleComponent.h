#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReceptacleEventDelegate.h"
#include "ReceptacleSlot.h"
#include "ReceptacleSlotEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "UseItemInterface.h"
#include "ReceptacleComponent.generated.h"

class ACharacterGunfire;
class AItem;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UReceptacleComponent : public UActorComponent, public IUseItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FReceptacleSlot> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Blocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceptacleEvent OnReceptacleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceptacleEvent OnReceptacleFull;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceptacleEvent OnReceptacleEmpty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceptacleSlotEvent AfterItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceptacleSlotEvent AfterItemRemoved;
    
    UReceptacleComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestReturnItemToInventory(ACharacterGunfire* Subject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventoryById(UInventoryComponent* Inventory, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventoryByClass(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItemFromInventory(ACharacterGunfire* Subject);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveItem(const int32 SlotID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValid(TSubclassOf<AItem> ItemClass, const FReceptacleSlot& Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractableSlot() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FReceptacleSlot> GetSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItemOfClass(TSubclassOf<AItem> ItemClass) const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddItem(const int32 SlotID, TSubclassOf<AItem> ItemClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

