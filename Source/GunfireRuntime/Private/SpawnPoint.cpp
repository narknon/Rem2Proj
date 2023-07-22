#include "SpawnPoint.h"
#include "Components/SceneComponent.h"


void ASpawnPoint::StartCoolDown() {
}

void ASpawnPoint::SetEnabled(bool EnabledIn) {
}

void ASpawnPoint::SetBusy(bool IsBusy) {
}

void ASpawnPoint::OnPostEditMove_Implementation() {
}

bool ASpawnPoint::IsCooledDown() const {
    return false;
}

bool ASpawnPoint::GetEnabled() const {
    return false;
}

bool ASpawnPoint::GetBusy() const {
    return false;
}

void ASpawnPoint::ClearCoolDown() {
}

ASpawnPoint::ASpawnPoint() {
    this->AutoRegisterSpawnPoint = true;
    this->Enabled = true;
    this->Busy = false;
    this->SpawnPointType = ESpawnPointType::Player;
    this->SpawnPosition = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPosition"));
    this->SpawnEndPosition = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnEndPosition"));
    this->SpawnMinCooldown = 5.00f;
    this->SpawnMaxCooldown = 10.00f;
    this->SpawnPointGroundCastDistance = 30.00f;
}

