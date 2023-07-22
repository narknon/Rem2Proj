#include "ZoneLinkComponent.h"
#include "Net/UnrealNetwork.h"

void UZoneLinkComponent::TravelToWaypoint(const FName& LinkNameID) {
}

void UZoneLinkComponent::TravelToDestinationZone(bool Force, bool Instant) {
}

void UZoneLinkComponent::SetLinkDisabled(bool Disabled) {
}

void UZoneLinkComponent::OnZoneLoaded(AZoneActor* NewZone) {
}

void UZoneLinkComponent::OnRep_NameID() {
}

void UZoneLinkComponent::OnRep_IsRespawnZoneLink() {
}

bool UZoneLinkComponent::IsWaypoint() const {
    return false;
}

bool UZoneLinkComponent::IsRespawnZoneLink() const {
    return false;
}

bool UZoneLinkComponent::IsLinkDisabled() {
    return false;
}

bool UZoneLinkComponent::IsLinkActive() {
    return false;
}

bool UZoneLinkComponent::IsDestinationZoneLoaded() {
    return false;
}

bool UZoneLinkComponent::HasBeenUsed() {
    return false;
}

EZoneLinkType UZoneLinkComponent::GetType() const {
    return EZoneLinkType::Link;
}

ASpawnPoint* UZoneLinkComponent::GetSpawnPoint() {
    return NULL;
}

FZoneLinkInfo UZoneLinkComponent::GetLinkInfo() const {
    return FZoneLinkInfo{};
}

AZoneActor* UZoneLinkComponent::GetDestinationZone() {
    return NULL;
}

TArray<FZoneLinkInfo> UZoneLinkComponent::GetAccessibleWaypoints() {
    return TArray<FZoneLinkInfo>();
}

void UZoneLinkComponent::ActivateLink() {
}

void UZoneLinkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UZoneLinkComponent, NameID);
    DOREPLIFETIME(UZoneLinkComponent, Status);
    DOREPLIFETIME(UZoneLinkComponent, bIsRespawnZoneLink);
}

UZoneLinkComponent::UZoneLinkComponent() {
    this->Status = EZoneLinkStatus::None;
    this->AutoRegister = false;
    this->Type = EZoneLinkType::Link;
    this->RequiredPlayerProximity = 1000.00f;
    this->bIsRespawnZoneLink = false;
    this->bHasWaypointAccess = false;
}

