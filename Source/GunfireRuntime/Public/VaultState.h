#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraversalState.h"
#include "VaultState.generated.h"

class UVaultSettings;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UVaultState : public UTraversalState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVaultSettings> VaultSettings;
    
public:
    UVaultState();
};

