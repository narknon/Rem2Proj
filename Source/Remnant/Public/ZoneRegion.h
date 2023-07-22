#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ZoneRegion.generated.h"

UCLASS(Blueprintable)
class REMNANT_API AZoneRegion : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegionType;
    
    AZoneRegion();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegionExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegionEnter();
    
    UFUNCTION(BlueprintCallable)
    bool Contains(const FVector& Location);
    
};

