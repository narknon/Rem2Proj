#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AmbientActorDelegateDelegate.h"
#include "DamageInfo.h"
#include "TileAmbientDebugInfo.h"
#include "TileAmbientSpawns.h"
#include "AmbientSpawnManager.generated.h"

class AActor;
class AAmbientSpawnRegion;
class ACharacterGunfire;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAmbientSpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Preload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientActorDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientActorDelegate OnDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAmbientSpawnRegion*> AmbientSpawnRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Generated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTileAmbientSpawns> AmbientSpawns;
    
public:
    UAmbientSpawnManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUninitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSetTileActive(int32 TileID, bool Active);
    
    UFUNCTION(BlueprintCallable)
    void OnGenerateAmbientSpawns();
    
    UFUNCTION(BlueprintCallable)
    void OnDead(uint8 Reason, ACharacterGunfire* Character, AActor* Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDead(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveActorsOfType(TSoftClassPtr<AActor> ActorBP);
    
    UFUNCTION(BlueprintCallable)
    FTileAmbientDebugInfo GetDebugInfo(int32 TileID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveCharacterCount();
    
};

