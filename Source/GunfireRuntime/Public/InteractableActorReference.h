#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractableActorReference.generated.h"

class AActor;
class UInteractableStateBase;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FInteractableActorReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractableStateBase> State;
    
    FInteractableActorReference();
};

