#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "Templates/SubclassOf.h"
#include "PostProcessSkylightComponent.generated.h"


UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPostProcessSkylightComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SkyLightActorCls;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLight;
    
public:
    UPostProcessSkylightComponent();
    UFUNCTION(BlueprintCallable)
    USkyLightComponent* GetCurrentSkylight();


protected:

    virtual void OnRegister() override;
    virtual void OnUnregister() override;

    //~ Begin UObject Interface
    virtual void Serialize(FArchive& Ar) override;
    //~ End UObject Interface
};

