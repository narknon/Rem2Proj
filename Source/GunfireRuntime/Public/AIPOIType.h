#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIPOIType.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UAIPOIType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationTag;
    
    UAIPOIType();
};

