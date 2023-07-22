#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "UserSetting_Base.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class GUNFIRERUNTIME_API UUserSetting_Base : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UUserSetting_Base();
    
    // Fix for true pure virtual functions not being implemented
};

