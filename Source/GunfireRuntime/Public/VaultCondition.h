#pragma once
#include "CoreMinimal.h"
#include "EVaultType.h"
#include "Templates/SubclassOf.h"
#include "TraversalCondition.h"
#include "VaultCondition.generated.h"

class UVaultSettings;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UVaultCondition : public UTraversalCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVaultSettings> VaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVaultType VaultType;
    
public:
    UVaultCondition();
};

