#include "AdvancedDecalComponent.h"

UAdvancedDecalComponent* UAdvancedDecalComponent::SpawnAdvancedDecalAttached(UMaterialInterface* DecalMaterialIn, FVector DecalSizeIn, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan, UCurveFloat* EmissiveCurve, UCurveFloat* OpacityCurve, bool bSetLifespan) {
    return NULL;
}

UAdvancedDecalComponent* UAdvancedDecalComponent::SpawnAdvancedDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterialIn, FVector DecalSizeIn, FVector Location, FRotator Rotation, float LifeSpan, UCurveFloat* EmissiveCurve, UCurveFloat* OpacityCurve, bool bSetLifespan) {
    return NULL;
}

UAdvancedDecalComponent::UAdvancedDecalComponent() {
}

