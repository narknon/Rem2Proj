#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ItemManager.generated.h"

class AItem;
class UItemManager;
class UObject;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UItemManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TObjectPtr<UClass>> ItemTypes;
    
public:
    UItemManager();
    UFUNCTION(BlueprintCallable)
    void GetItemsInRangeByType(const FVector& Position, float Radius, TSoftClassPtr<AItem> Type, TArray<AItem*>& OutItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UItemManager* GetInstance(const UObject* WorldContextObject);
    
};

