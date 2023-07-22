#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIPFImpulse.generated.h"

class USphereComponent;

UCLASS(Blueprintable, NotPlaceable)
class UIPF_API AUIPFImpulse : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComp;
    
public:
    AUIPFImpulse();
    UFUNCTION(BlueprintCallable)
    void InitializeImpulse(float ImpulseRadius, bool UsingTruePhys, bool UsingShaderInt, float ImpulseStrength);
    
};

