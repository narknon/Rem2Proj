#include "PostProcessSkylightComponent.h"

USkyLightComponent* UPostProcessSkylightComponent::GetCurrentSkylight() {
    return NULL;
}

UPostProcessSkylightComponent::UPostProcessSkylightComponent() {
    this->SkyLightActorCls = NULL;
    this->SkyLight = NULL;
}

void UPostProcessSkylightComponent::OnRegister()
{

}

void UPostProcessSkylightComponent::OnUnregister()
{

}

void UPostProcessSkylightComponent::Serialize(FArchive& Ar)
{

}