#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClimbAppendageEffectorParameters.h"
#include "ClimbableSurfaceAppendageFilter.generated.h"

USTRUCT(BlueprintType)
struct FClimbableSurfaceAppendageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEffectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbAppendageEffectorParameters EffectorParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateAppendage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultRelativeLocation;
    
    GUNFIRERUNTIME_API FClimbableSurfaceAppendageFilter();
};

