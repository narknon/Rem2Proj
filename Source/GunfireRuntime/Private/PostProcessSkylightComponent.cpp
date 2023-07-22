#include "PostProcessSkylightComponent.h"

USkyLightComponent* UPostProcessSkylightComponent::GetCurrentSkylight() {
    return NULL;
}

UPostProcessSkylightComponent::UPostProcessSkylightComponent() {
    this->SkyLightActorCls = NULL;
    this->SkyLight = NULL;
}

