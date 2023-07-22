#include "PortalEffectsComponent.h"

UPortalEffectsComponent::UPortalEffectsComponent() {
    this->bOverrideEnterTime = false;
    this->EnterTime = 0.00f;
    this->bOverrideExitTime = false;
    this->ExitTime = 0.00f;
    this->bOverridePortalScale = false;
    this->bOverrideEntryRadiusOffset = false;
    this->EntryRadiusOffset = 0.00f;
    this->bOverridePortalEntryDistance = false;
    this->PortalEntryDistance = 0.00f;
    this->bOverridePortalExitDistance = false;
    this->PortalExitDistance = 0.00f;
    this->bOverrideEnterVFX = false;
    this->EnterVFX = NULL;
    this->bOverrideEnterSFX = false;
    this->bOverrideExitVFX = false;
    this->ExitVFX = NULL;
    this->bOverrideExitSFX = false;
    this->bOverrideUprightPortalEnterState = false;
}

