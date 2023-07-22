#include "UIPFImpulse.h"
#include "Components/SphereComponent.h"

void AUIPFImpulse::InitializeImpulse(float ImpulseRadius, bool UsingTruePhys, bool UsingShaderInt, float ImpulseStrength) {
}

AUIPFImpulse::AUIPFImpulse() {
    this->SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
}

