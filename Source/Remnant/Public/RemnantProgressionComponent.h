#pragma once
#include "CoreMinimal.h"
#include "ProgressionComponent.h"
#include "OnExperienceGainedDelegate.h"
#include "RemnantProgressionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantProgressionComponent : public UProgressionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExperienceGained OnExperienceGained;
    
public:
    URemnantProgressionComponent();
};

