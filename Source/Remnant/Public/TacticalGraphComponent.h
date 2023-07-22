#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TacticalGraphPath.h"
#include "Templates/SubclassOf.h"
#include "TacticalGraphComponent.generated.h"

class UTacticalGraphQueryParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UTacticalGraphComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTacticalGraphComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    bool MoveTo(TSubclassOf<UTacticalGraphQueryParams> Params, float InAcceptanceRadius, bool InUpdateTacticalPoint, bool InNavigatePath, FName InBlackboardKey, FName InStatusKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPathIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTacticalGraphPath GetCurrentPath() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindPath(TSubclassOf<UTacticalGraphQueryParams> Params, FTacticalGraphPath& OutPath);
    
};

