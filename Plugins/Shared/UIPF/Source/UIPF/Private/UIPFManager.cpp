#include "UIPFManager.h"
#include "UIPFActor.h"

void AUIPFManager::ImpulseAtLocation(FVector Location, float ImpulseDiameter, float ImpulseStrength) {
}


void AUIPFManager::FoliageForceAtLocation(float fStrength, float fSizePercent, FVector HitLocation, bool bIsImpulse) {
}

AUIPFManager::AUIPFManager() {
    this->UseShaderInteraction = true;
    this->UseTruePhysics = true;
    this->UseShaderIntSwitch = true;
    this->UseShaderIntIOS = true;
    this->UseShaderIntAndroid = true;
    this->UseTruePhysicsSwitch = true;
    this->UseTruePhysicsPS4 = true;
    this->UseTruePhysicsXbox = true;
    this->UseTruePhysicsIOS = true;
    this->UseTruePhysicsAndroid = true;
    this->ActivateOnImpulse = false;
    this->bLimitTickRate = false;
    this->TickRate = 60.00f;
    this->MaxPhysicsActivationDistance = 4000.00f;
    this->DefaultInteractorActivationDistance = 20000.00f;
    this->UIPFActorClass = AUIPFActor::StaticClass();
    this->bOverrideTraceChannel = false;
    this->FoliageTraceChannel = ECC_WorldStatic;
    this->ForceSplatMat = NULL;
    this->AccumulatorInst = NULL;
    this->ManualSplatInst = NULL;
    this->VelocitySplatInst = NULL;
    this->Canvas = NULL;
    this->CanvasInteract = NULL;
}

