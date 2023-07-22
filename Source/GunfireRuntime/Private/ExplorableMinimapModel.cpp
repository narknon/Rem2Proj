#include "ExplorableMinimapModel.h"
#include "Components/SceneComponent.h"

void AExplorableMinimapModel::SetFullscreenOverlayWidget(UUserWidget* OverlayWidget) {
}

void AExplorableMinimapModel::RevealHiddenArea(AActor* ContextActor, int32 HiddenAreaID) {
}

void AExplorableMinimapModel::OnUninitialize() {
}

void AExplorableMinimapModel::OnTileVisibilityUpdate(int32 ID, bool Visible) {
}

void AExplorableMinimapModel::OnMinimapEntitySpawnUnregistered_Implementation(AActor* Entity) {
}

void AExplorableMinimapModel::OnMinimapEntitySpawnRegistered_Implementation(AActor* Entity) {
}

void AExplorableMinimapModel::OnMinimapEntityRegistrationChanged_Implementation(AActor* EntityOwner, bool IsRegistering) {
}

void AExplorableMinimapModel::OnMapGenFullyLoaded(UMapGenComponent* Component) {
}

float AExplorableMinimapModel::GetVisibilityAtLocation(const FVector& WorldLocation, FVector Extents) const {
    return 0.0f;
}

AExplorableMinimapModel* AExplorableMinimapModel::GetExplorableMinimapModel(const UObject* WorldContextObject) {
    return NULL;
}

AExplorableMinimapModel::AExplorableMinimapModel() {
    this->VisibilityRadius = 3000.00f;
    this->VisibilityHeight = 350.00f;
    this->VisibilityCurveHoriz = NULL;
    this->VisibilityCurveVertical = NULL;
    this->GridResolution = 50.00f;
    this->WidgetSize = 64.00f;
    this->WidgetMinSize = 16.00f;
    this->WidgetMaxSize = 32.00f;
    this->FullScreenOverlayWidget = NULL;
    this->MinimapScene = CreateDefaultSubobject<USceneComponent>(TEXT("MinimapSceneComponent"));
}

