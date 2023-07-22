#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "DamageInfo.h"
#include "EncounterSpawn.h"
#include "SoundGunfire.h"
#include "EncounterManager.generated.h"

class AActor;
class APlayerController;
class UEncounterInstance;
class USpawnTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UEncounterManager : public UActorComponent, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEncounterInstance*> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpawn> SpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpawn> ActiveSpawns;
    
public:
    UEncounterManager();
    UFUNCTION(BlueprintCallable)
    void StopEncounter(int32 encounterid);
    
    UFUNCTION(BlueprintCallable)
    void StopAllEncountersForOwner(AActor* Owner, bool DestroyActiveSpawns);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEncounter(int32 encounterid);
    
    UFUNCTION(BlueprintCallable)
    void PauseEncounter(int32 encounterid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyDead(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnAudio(FSoundGunfire SpawnAudio, const FVector_NetQuantize& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyExplored();
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete(int32 encounterid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSpawnsForOwner(AActor* Owner, bool IncludeQueuedSpawns);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumEncountersForOwner(AActor* Owner, bool WithQueuedSpawnsOnly, bool MatchAggroGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrontTileID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTileID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBehindTileID();
    
    UFUNCTION(BlueprintCallable)
    UEncounterInstance* DoEncounter(USpawnTable* SpawnTable, int32 Level, int32 Rating, const TArray<FName>& Tags, AActor* Target, int32 Flags);
    
    
    // Fix for true pure virtual functions not being implemented
};

