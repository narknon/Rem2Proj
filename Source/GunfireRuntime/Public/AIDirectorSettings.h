#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EncounterGroup.h"
#include "AIDirectorSettings.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAIDirectorSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterGroup> EncounterGroups;
    
    AAIDirectorSettings();
};

