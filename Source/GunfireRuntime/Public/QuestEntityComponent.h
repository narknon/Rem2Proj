#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UQuestEntityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UQuestEntityComponent();
};

