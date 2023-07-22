#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EncounterDelegateDelegate.h"
#include "EncounterEventDelegateDelegate.h"
#include "EncounterSpawnDelegateDelegate.h"
#include "SoundGunfire.h"
#include "SpawnList.h"
#include "EncounterInstance.generated.h"

class AActor;
class APlayerController;
class UEncounterManager;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEncounterInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEventDelegate OnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterSpawnDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterSpawnDelegate OnDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterDelegate OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEncounterManager* EncounterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnList SpawnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AggroGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AggroGroupOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Streaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Paused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerpetualSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundGunfire SoundToPlayNextSpawn;
    
public:
    UEncounterInstance();
    UFUNCTION(BlueprintCallable)
    void StopEncounter(bool DestroyActiveSpawns);
    
    UFUNCTION(BlueprintCallable)
    void SetAggroGroup(FName NewAggroGroup);
    
    UFUNCTION(BlueprintCallable)
    void ResumeEncounter();
    
    UFUNCTION(BlueprintCallable)
    void PauseEncounter();
    
    UFUNCTION(BlueprintCallable)
    int32 NumQueuedSpawns();
    
    UFUNCTION(BlueprintCallable)
    int32 NumActiveSpawns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable)
    void InvokeEventOnActors(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetSpawnedActors();
    
};

