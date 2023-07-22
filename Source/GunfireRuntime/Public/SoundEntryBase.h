#pragma once
#include "CoreMinimal.h"
#include "InheritableTaggedObject.h"
#include "SoundEntryBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API USoundEntryBase : public UInheritableTaggedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    USoundEntryBase();
};

