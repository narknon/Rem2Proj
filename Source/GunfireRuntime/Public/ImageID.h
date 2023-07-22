#pragma once
#include "CoreMinimal.h"
#include "InheritableNamedObject.h"
#include "ImageID.generated.h"

class UImageEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UImageID : public UInheritableNamedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UImageEntry*> ImageEntries;
    
    UImageID();
};

