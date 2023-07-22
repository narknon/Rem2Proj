#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIHudComponent.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UUIHudComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
public:
    UUIHudComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParentSetVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetControllingPawn() const;
    
};

