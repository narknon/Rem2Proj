#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EItemQuerySortMethod.h"
#include "ItemQueryFilter.h"
#include "ItemQueryResult.h"
#include "Templates/SubclassOf.h"
#include "ItemType.generated.h"

class AActor;
class UInventoryComponent;
class UItemType;
class UStatInfoSet;
class UTexture2D;

UCLASS(Abstract, Blueprintable, Const)
class GUNFIRERUNTIME_API UItemType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> BaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatInfoSet* ItemStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatInfoSet* CharacterStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemType>> AdditionalTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UItemType();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void SortQueryResults(const TArray<UInventoryComponent*>& Inventories, TArray<FItemQueryResult>& Results, const TArray<EItemQuerySortMethod>& SortMethods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static TArray<FItemQueryResult> QueryRelevantItemsEx(const TArray<UInventoryComponent*>& Inventories, const FItemQueryFilter& Filter, TArray<EItemQuerySortMethod> SortMethods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static TArray<FItemQueryResult> QueryRelevantItems(const TArray<UInventoryComponent*>& Inventories, const FItemQueryFilter& Filter, EItemQuerySortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UInventoryComponent*> GetRelevantInventoriesForType(AActor* Actor, TSubclassOf<UItemType> Type);
    
};

