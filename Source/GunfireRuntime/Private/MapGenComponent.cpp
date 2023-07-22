#include "MapGenComponent.h"
#include "Net/UnrealNetwork.h"

void UMapGenComponent::SetTileVisibleOverride(int32 ID, bool Visible) {
}

void UMapGenComponent::OnStartedVisualLogger() {
}

void UMapGenComponent::OnRep_TilesBase() {
}

void UMapGenComponent::OnRep_MapMusic() {
}

void UMapGenComponent::OnRep_MapAudioVolumeClass() {
}

bool UMapGenComponent::IsVistaTile(const FTile& Tile) const {
    return false;
}

bool UMapGenComponent::IsTileVisited(int32 TileID) const {
    return false;
}

bool UMapGenComponent::IsTileGeneratingNav(int32 TileID) const {
    return false;
}

bool UMapGenComponent::IsTileActive(int32 TileID) const {
    return false;
}

bool UMapGenComponent::IsPositionInTile(const FVector& WorldPosition, const FTile& Tile) const {
    return false;
}

ETileState UMapGenComponent::GetTileState(int32 TileID) const {
    return ETileState::Uninitialized;
}

UTileSet* UMapGenComponent::GetTileSet() const {
    return NULL;
}

bool UMapGenComponent::GetTileForActor(AActor* Actor, FTile& Out) const {
    return false;
}

int32 UMapGenComponent::GetTileDistance(int32 TileID) const {
    return 0;
}

bool UMapGenComponent::GetTileByNameID(FName NameID, FTile& Out) const {
    return false;
}

bool UMapGenComponent::GetTileAtPosition(const FVector& WorldPosition, FTile& Out) const {
    return false;
}

ULevel* UMapGenComponent::GetTemplateLoadedLevel() {
    return NULL;
}

bool UMapGenComponent::GetSpawnTagsAtPosition(const FVector& WorldPosition, TArray<FName>& Out) const {
    return false;
}

FVector UMapGenComponent::GetNormalizedTilePos(const FTile& Tile, const FVector& Pos) const {
    return FVector{};
}

TArray<FVector> UMapGenComponent::GetNormalizedTileConnectors(const FTile& Tile) const {
    return TArray<FVector>();
}

FBox UMapGenComponent::GetNormalizedTileBounds(const FTile& Tile) const {
    return FBox{};
}

UMusicSetAsset* UMapGenComponent::GetMapMusicSet() {
    return NULL;
}

ULevel* UMapGenComponent::GetMapGenLevelForActor(AActor* Actor) {
    return NULL;
}

int32 UMapGenComponent::GetMapGenDebugState() {
    return 0;
}

bool UMapGenComponent::GetMapGenAttributeForActor(EMapGenAttributeScope Scope, AActor* Actor, FName Key, FMapGenAttribute& Out) {
    return false;
}

float UMapGenComponent::GetLevelMaxSize(bool IncludeVista) const {
    return 0.0f;
}

FVector UMapGenComponent::GetLevelCenter(bool IncludeVista) const {
    return FVector{};
}

FBox UMapGenComponent::GetLevelBounds(bool IncludeVista) const {
    return FBox{};
}

bool UMapGenComponent::GetAttribute(EMapGenAttributeScope Scope, int32 TileOrRegionID, FName Key, FMapGenAttribute& Out) {
    return false;
}

UMapGenComponent* UMapGenComponent::FindMapGenComponentForActor(AActor* Actor) {
    return NULL;
}

void UMapGenComponent::ClearTileVisibleOverride(int32 ID) {
}

void UMapGenComponent::AddAttribute(FMapGenAttribute Attribute) {
}

void UMapGenComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMapGenComponent, TilesetOverride);
    DOREPLIFETIME(UMapGenComponent, TemplateOverride);
    DOREPLIFETIME(UMapGenComponent, SkyBoxOverride);
    DOREPLIFETIME(UMapGenComponent, UseLoadedLevelAsTemplate);
    DOREPLIFETIME(UMapGenComponent, MapOffset);
    DOREPLIFETIME(UMapGenComponent, MapInstanceName);
    DOREPLIFETIME(UMapGenComponent, TilesBase);
    DOREPLIFETIME(UMapGenComponent, NoTiles);
    DOREPLIFETIME(UMapGenComponent, Attributes);
    DOREPLIFETIME(UMapGenComponent, ServerState);
    DOREPLIFETIME(UMapGenComponent, MapAudioVolumeClass);
    DOREPLIFETIME(UMapGenComponent, MapMusicSet);
}

UMapGenComponent::UMapGenComponent() {
    this->Seed = -1;
    this->Level = 1;
    this->TilesetOverride = NULL;
    this->UseLoadedLevelAsTemplate = false;
    this->AutoInitialize = false;
    this->MapInstanceName = TEXT("Map");
    this->Settings = NULL;
    this->TemplateLevel = NULL;
    this->SkyBoxLevel = NULL;
    this->NavBounds = NULL;
    this->Generated = false;
    this->NoTiles = false;
    this->ServerState = EMapGenState::Uninitialized;
    this->MapMusicSet = NULL;
    this->MapAudioVolume = NULL;
}

