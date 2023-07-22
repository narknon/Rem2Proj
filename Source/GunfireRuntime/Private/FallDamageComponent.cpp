#include "FallDamageComponent.h"

void UFallDamageComponent::TriggerFallDeath() {
}

void UFallDamageComponent::SetEnabled(bool bEnabled) {
}

void UFallDamageComponent::Server_DisableUntilGrounded_Implementation(bool bDisable) {
}
bool UFallDamageComponent::Server_DisableUntilGrounded_Validate(bool bDisable) {
    return true;
}

bool UFallDamageComponent::IsEnabled() const {
    return false;
}

float UFallDamageComponent::GetCurrentFallDistance() const {
    return 0.0f;
}

void UFallDamageComponent::DisableUntilGrounded(bool bDisable) {
}

UFallDamageComponent::UFallDamageComponent() {
    this->bStartEnabled = true;
    this->bSimulateOnOwningClient = false;
    this->bRequiresAllowFallDamageTag = true;
    this->bServerAuthoritative = false;
    this->LandDamageCurve = NULL;
    this->LandHealthPercent = 0.25f;
    this->FallDamageType = NULL;
    this->LandDamageType = NULL;
    this->DoDamageOnLand = true;
    this->bSkipDamageWhileInWater = false;
    this->StatsComponent = NULL;
    this->MovementComponent = NULL;
}

