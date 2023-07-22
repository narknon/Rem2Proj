#include "SilhouetteComponent.h"

void USilhouetteComponent::OnInventoryChanged() {
}

USilhouetteComponent::USilhouetteComponent() {
    this->RequiredTagCanBeAnyActor = false;
    this->Visibility = ESilhouetteVisibility::WhenNotVisible;
    this->MaxDistance = 5000.00f;
    this->DefaultSilhouetteColorIdx = 253;
    this->WoundedSilhouetteColorIdx = 254;
    this->bAutoUpdateEquipment = true;
}

