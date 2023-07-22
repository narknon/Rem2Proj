#include "NavModifierGunfireComponent.h"
#include "NavAreas/NavArea_Null.h"

void UNavModifierGunfireComponent::SetState(bool Enabled) {
}

UNavModifierGunfireComponent::UNavModifierGunfireComponent() {
    this->EnabledAreaClass = UNavArea_Null::StaticClass();
    this->DisabledAreaClass = UNavArea_Null::StaticClass();
    this->Shape = ENavModifierGunfireShape::Box;
    this->CylinderRadius = 50.00f;
    this->CylinderHeight = 100.00f;
    this->IsEnabled = true;
}

