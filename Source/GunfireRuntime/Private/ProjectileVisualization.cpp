#include "ProjectileVisualization.h"
#include "Templates/SubclassOf.h"

void AProjectileVisualization::VisualizeProjectileFromClass(AActor* Cause, TSubclassOf<AActor> ProjectileClass, FVector StartLocation, FRotator StartDirection, const FProjectileVisualizationParams& Params, FProjectileVisualizationContext& Context) {
}

void AProjectileVisualization::VisualizeProjectile(AActor* Cause, AActor* Projectile, FVector StartLocation, FRotator StartDirection, const FProjectileVisualizationParams& Params, FProjectileVisualizationContext& Context) {
}

bool AProjectileVisualization::PreDraw_Implementation(const FProjectileVisualizationParams& Params, FProjectileVisualizationContext& Context) {
    return false;
}


void AProjectileVisualization::ClearProjectileVisualization(FProjectileVisualizationContext& Context) {
}

AProjectileVisualization::AProjectileVisualization() {
    this->PathMesh = NULL;
    this->PathMaterial = NULL;
    this->MeshScale = 1.00f;
    this->DrawStartDistance = 0.00f;
    this->ImpactActorClass = NULL;
    this->bOnlyShowImpactActorWtihValidTarget = false;
    this->bUseNoImpactActorClass = false;
    this->NoImpactActorClass = NULL;
    this->bUsesTargetColors = true;
    this->bInterpolateTargetColor = true;
    this->bDrawPathAsMarquee = true;
    this->MarqueeSpeed = 200.00f;
    this->FullAlphaDistance = 0.00f;
    this->ImpactActor = NULL;
}

