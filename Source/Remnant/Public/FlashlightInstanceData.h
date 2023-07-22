#pragma once
#include "CoreMinimal.h"
#include "EquipmentInstanceData.h"
#include "FlashlightInstanceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class REMNANT_API UFlashlightInstanceData : public UEquipmentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool Depleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool On;
    
    UFlashlightInstanceData();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

