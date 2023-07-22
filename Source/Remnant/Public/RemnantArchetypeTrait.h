#pragma once
#include "CoreMinimal.h"
#include "Archetype.h"
#include "Templates/SubclassOf.h"
#include "RemnantArchetypeTrait.generated.h"

class URemnantArchetype;

UCLASS(Blueprintable)
class REMNANT_API URemnantArchetypeTrait : public UArchetype {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URemnantArchetype> RemnantArchetype;
    
public:
    URemnantArchetypeTrait();
};

