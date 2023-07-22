#pragma once
#include "CoreMinimal.h"
#include "SequencerManager.h"
#include "RemnantSequencerManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantSequencerManager : public USequencerManager {
    GENERATED_BODY()
public:
    URemnantSequencerManager();
};

