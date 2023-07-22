#pragma once
#include "CoreMinimal.h"
#include "ExplorableMinimapModel.h"
#include "ExplorableMinimapModelRemnant.generated.h"

class AZoneActor;

UCLASS(Blueprintable)
class REMNANT_API AExplorableMinimapModelRemnant : public AExplorableMinimapModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZoneActor* VisitedCoordinatesOwner;
    
public:
    AExplorableMinimapModelRemnant();
};

