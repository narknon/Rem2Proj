#include "ClimbingSurfaceModifier.h"
#include "Components/BoxComponent.h"

bool AClimbingSurfaceModifier::IsPointInModifier(const FVector& Point) const {
    return false;
}

AClimbingSurfaceModifier::AClimbingSurfaceModifier() {
    this->Modifier = EClimbingSurfaceModifierType::NoSurfaces;
    this->ModifierBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ModifierBox"));
}

