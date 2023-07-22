#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ImageSetManager.generated.h"

class UImageSet;

UCLASS(Blueprintable, Transient)
class GUNFIRERUNTIME_API UImageSetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UImageSet>> RegisteredSets;
    
public:
    UImageSetManager();
};

