#include "AkRoomComponent.h"

void UAkRoomComponent::SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}

UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent() const {
    return NULL;
}

UAkRoomComponent::UAkRoomComponent() {
    this->bEnable = true;
    this->bDynamic = false;
    this->Priority = 0.00f;
    this->WallOcclusion = 1.00f;
    this->AuxSendLevel = 0.00f;
    this->AutoPost = false;
    this->GeometryComponent = NULL;
}

