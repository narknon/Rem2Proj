#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EQueryShapeType.h"
#include "ActorQueryShapeDetails.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FActorQueryShapeDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueryShapeType ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxExtents;
    
    FActorQueryShapeDetails();
};

