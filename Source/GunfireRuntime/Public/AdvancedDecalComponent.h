#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/DecalComponent.h"
#include "Engine/EngineTypes.h"
#include "AdvancedDecalComponent.generated.h"

class UAdvancedDecalComponent;
class UCurveFloat;
class UMaterialInterface;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAdvancedDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UAdvancedDecalComponent();
    UFUNCTION(BlueprintCallable)
    static UAdvancedDecalComponent* SpawnAdvancedDecalAttached(UMaterialInterface* DecalMaterialIn, FVector DecalSizeIn, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan, UCurveFloat* EmissiveCurve, UCurveFloat* OpacityCurve, bool bSetLifespan);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAdvancedDecalComponent* SpawnAdvancedDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterialIn, FVector DecalSizeIn, FVector Location, FRotator Rotation, float LifeSpan, UCurveFloat* EmissiveCurve, UCurveFloat* OpacityCurve, bool bSetLifespan);
    
};

