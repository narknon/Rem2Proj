#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TagParticleEffectPair.generated.h"

class UItemType;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FTagParticleEffectPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> EquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomizationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PSTemplate;
    
    GUNFIRERUNTIME_API FTagParticleEffectPair();
};

