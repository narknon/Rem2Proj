#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AudioVolumeClass.h"
#include "EMapGenAttributeScope.h"
#include "EMapGenState.h"
#include "ETileState.h"
#include "MapGenAttribute.h"
#include "MapGenVoidDelegateDelegate.h"
#include "Tile.h"
#include "TileActiveDelegateDelegate.h"
#include "TileBase.h"
#include "TileVisibleDelegateDelegate.h"
#include "MapGenComponent.generated.h"

class AActor;
class AMapGenSettings;
class AMapTileInfo;
class APlayerController;
class ARuntimeNavMeshBoundsVolume;
class AVolume;
class ULevel;
class ULevelStreaming;
class UMapGenComponent;
class UMusicSetAsset;
class UTileSet;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UMapGenComponent : public UActorComponent, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UTileSet* TilesetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString TemplateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString SkyBoxOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UseLoadedLevelAsTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector MapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString MapInstanceName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTileActiveDelegate OnSetTileActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTileVisibleDelegate OnSetTileVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnOverallVisibilityChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnGenerationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnFullyLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnPreInitialize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnUninitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapGenVoidDelegate OnFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapGenSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* TemplateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> TemplateSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* SkyBoxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARuntimeNavMeshBoundsVolume* NavBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Generated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TilesBase, meta=(AllowPrivateAccess=true))
    TArray<FTileBase> TilesBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool NoTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTile> Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> PreviousVisibleTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMapGenAttribute> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EMapGenState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapAudioVolumeClass, meta=(AllowPrivateAccess=true))
    FAudioVolumeClass MapAudioVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapMusic, meta=(AllowPrivateAccess=true))
    UMusicSetAsset* MapMusicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelsUnloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMapTileInfo*> TemplateTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVolume* MapAudioVolume;
    
public:
    UMapGenComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTileVisibleOverride(int32 ID, bool Visible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStartedVisualLogger();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TilesBase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MapMusic();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MapAudioVolumeClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVistaTile(const FTile& Tile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileVisited(int32 TileID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileGeneratingNav(int32 TileID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileActive(int32 TileID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionInTile(const FVector& WorldPosition, const FTile& Tile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETileState GetTileState(int32 TileID) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTileSet* GetTileSet() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTileForActor(AActor* Actor, FTile& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTileDistance(int32 TileID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTileByNameID(FName NameID, FTile& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTileAtPosition(const FVector& WorldPosition, FTile& Out) const;
    
    UFUNCTION(BlueprintCallable)
    ULevel* GetTemplateLoadedLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpawnTagsAtPosition(const FVector& WorldPosition, TArray<FName>& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNormalizedTilePos(const FTile& Tile, const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetNormalizedTileConnectors(const FTile& Tile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetNormalizedTileBounds(const FTile& Tile) const;
    
    UFUNCTION(BlueprintCallable)
    UMusicSetAsset* GetMapMusicSet();
    
    UFUNCTION(BlueprintCallable)
    static ULevel* GetMapGenLevelForActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMapGenDebugState();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetMapGenAttributeForActor(EMapGenAttributeScope Scope, AActor* Actor, FName Key, FMapGenAttribute& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelMaxSize(bool IncludeVista) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLevelCenter(bool IncludeVista) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetLevelBounds(bool IncludeVista) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAttribute(EMapGenAttributeScope Scope, int32 TileOrRegionID, FName Key, FMapGenAttribute& Out);
    
    UFUNCTION(BlueprintCallable)
    static UMapGenComponent* FindMapGenComponentForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearTileVisibleOverride(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void AddAttribute(FMapGenAttribute Attribute);
    
    
    // Fix for true pure virtual functions not being implemented
};

