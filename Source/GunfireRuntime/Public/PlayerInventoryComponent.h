#pragma once
#include "CoreMinimal.h"
#include "AutoUpgradeableItem.h"
#include "InventoryComponent.h"
#include "OnPickedUpDuplicateUniqueDelegate.h"
#include "OnPickedUpUpgradedUniqueDelegate.h"
#include "PlayerInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPlayerInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UniqueMaterialRecipeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoUpgradeableItem> AutoUpgradeableItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpDuplicateUnique OnPickedUpDuplicateUnique;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpUpgradedUnique OnPickedUpUpgradedUnique;
    
    UPlayerInventoryComponent();
};

