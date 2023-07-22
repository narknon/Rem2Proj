#pragma once
#include "CoreMinimal.h"
#include "AmbientActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmbientActorDelegate, AActor*, Actor);

