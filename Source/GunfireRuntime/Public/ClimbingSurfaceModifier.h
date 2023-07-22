#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EClimbingSurfaceModifierType.h"
#include "ClimbingSurfaceModifier.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AClimbingSurfaceModifier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbingSurfaceModifierType Modifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ModifierBox;
    
public:
    AClimbingSurfaceModifier();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInModifier(const FVector& Point) const;
    
};

