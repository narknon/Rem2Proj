#pragma once
#include "CoreMinimal.h"
#include "InheritableObject.h"
#include "ActorStateDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UActorStateDecorator : public UInheritableObject {
    GENERATED_BODY()
public:
    UActorStateDecorator();
};

