#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "AnimMetaDataGunfire.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimMetaDataGunfire : public UAnimMetaData {
    GENERATED_BODY()
public:
    UAnimMetaDataGunfire();
};

