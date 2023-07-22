#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RadialShortcutComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URadialShortcutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URadialShortcutComponent();
};

