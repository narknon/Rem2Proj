#pragma once
#include "CoreMinimal.h"
#include "HierarchicalEditInterface.h"
#include "InheritableObject.h"
#include "SoftSoundGunfire.h"
#include "DialogLine.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDialogLine : public UInheritableObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftSoundGunfire Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> FacialAnimation;
    
    UDialogLine();
    
    // Fix for true pure virtual functions not being implemented
};

