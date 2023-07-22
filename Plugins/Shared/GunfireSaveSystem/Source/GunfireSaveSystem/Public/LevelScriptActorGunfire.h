#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelScriptActorGunfire.generated.h"

UCLASS(Blueprintable)
class GUNFIRESAVESYSTEM_API ALevelScriptActorGunfire : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UniqueIDGenerator;
    
public:
    ALevelScriptActorGunfire();
};

