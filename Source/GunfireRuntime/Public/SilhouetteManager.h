#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SilhouetteManager.generated.h"

class USilhouetteComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USilhouetteManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USilhouetteComponent*> SilhouetteComponents;
    
public:
    USilhouetteManager();
};

