#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightLOSTaggingComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Equipment, meta=(BlueprintSpawnableComponent))
class REMNANT_API UFlashlightLOSTaggingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LightOverlapTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapComponent;
    
public:
    UFlashlightLOSTaggingComponent();
    UFUNCTION(BlueprintCallable)
    bool LightEndOverlap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void LightBeginOverlap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnableOverlapCheck(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    void DisableOverlapCheck();
    
};

