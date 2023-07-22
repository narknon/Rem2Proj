#include "MeshOutlinerComponent.h"

void UMeshOutlinerComponent::SetOwnerOutlined(bool bEnable) {
}

bool UMeshOutlinerComponent::IsCurrentlyOutlined() const {
    return false;
}

UMeshOutlinerComponent::UMeshOutlinerComponent() {
    this->bStartOutlined = true;
    this->OutlineStencilValue = 4;
    this->OutlineExclusionTag = TEXT("NoOutline");
}

