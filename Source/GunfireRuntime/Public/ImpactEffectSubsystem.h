#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "ImpactEffectSubsystem.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class GUNFIRERUNTIME_API UImpactEffectSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ImpactEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ImpactEffectsOverlay;
    
public:
    UImpactEffectSubsystem();
};

