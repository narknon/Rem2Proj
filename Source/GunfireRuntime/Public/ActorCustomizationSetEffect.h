#pragma once
#include "CoreMinimal.h"
#include "HierarchicalEditInterface.h"
#include "InheritableObject.h"
#include "ActorCustomizationSetEffect.generated.h"

class UActorCustomizationEffectEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UActorCustomizationSetEffect : public UInheritableObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActorCustomizationEffectEntry*> Entries;
    
public:
    UActorCustomizationSetEffect();
    
    // Fix for true pure virtual functions not being implemented
};

