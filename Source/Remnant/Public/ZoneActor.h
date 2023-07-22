#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MapGenAttribute.h"
#include "VisitedCoordinates.h"
#include "EZoneStatus.h"
#include "WorldResetInterface.h"
#include "ZoneLinkInfo.h"
#include "ZonePlayerDelegateDelegate.h"
#include "ZoneState.h"
#include "ZoneVoidDelegateDelegate.h"
#include "ZoneActor.generated.h"

class APlayerController;
class ARemnantQuest;
class AZoneActor;
class UAIDirector;
class UAmbientSpawnManager;
class UEncounterManager;
class UMapGenComponent;
class UObject;
class UPersistenceComponent;
class UResourceSpawnManager;
class UTileSet;
class UWorld;

UCLASS(Blueprintable)
class REMNANT_API AZoneActor : public AActor, public IWorldResetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapGenComponent* MapGen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIDirector* AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEncounterManager* EncounterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmbientSpawnManager* AmbientSpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResourceSpawnManager* ResourceSpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ZoneLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParentZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UTileSet* TileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MapTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SkyBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMapGenAttribute> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Static;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVisitedCoordinates FowVisitedCoordinates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZonePlayerDelegate OnPlayerEnteredZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZonePlayerDelegate OnPlayerExitedZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnPreZoneLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnZoneLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnZoneUnloaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool ZoneLevelInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FZoneLinkInfo> ZoneLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> DynamicResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DynamicResourceRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerState, meta=(AllowPrivateAccess=true))
    FZoneState ServerState;
    
public:
    AZoneActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLevelScaling(bool Force);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadZone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResourcesLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Level();
    
    UFUNCTION(BlueprintCallable)
    void OnMapGenInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnMapGenFullyLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnMapGenFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadZone(FName Link);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyUnloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFailedLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZoneStatus GetZoneStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZoneLevel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniqueName() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTOD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARemnantQuest* GetQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZoneActor* GetParentZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemLevel();
    
    UFUNCTION(BlueprintCallable)
    bool ContainsActor(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

