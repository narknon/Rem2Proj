#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ZoneManagerZoneChangeDelegateDelegate.h"
#include "ZoneVoidDelegateDelegate.h"
#include "ZoneManager.generated.h"

class AActor;
class AZoneActor;
class AZoneRegion;
class UObject;
class UZoneManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UZoneManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneManagerZoneChangeDelegate OnManagedZoneLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnAllZonesUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnAllRelevantZonesLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AZoneActor*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AZoneRegion*> ZoneRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, AZoneRegion*> ActiveZoneRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, AZoneRegion*> TempZoneRegions;
    
public:
    UZoneManager();
    UFUNCTION(BlueprintCallable)
    int32 UnlockAllWaypoints();
    
    UFUNCTION(BlueprintCallable)
    AZoneActor* GetZoneForSlot(int32 SlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AZoneActor* GetZoneForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AZoneActor* GetZoneByNameID(const UObject* WorldContextObject, const FName& NameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AZoneActor* GetZoneByID(const UObject* WorldContextObject, int32 ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UZoneManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBiomeForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void DestroyZone(AZoneActor* Zone);
    
    UFUNCTION(BlueprintCallable)
    AZoneActor* CreateZone(int32 SlotID, TSubclassOf<AZoneActor> ZoneActorBP, int32 SeedOverride);
    
};

