#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "ExcludeNavAreaStateDecorator.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UExcludeNavAreaStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> ExcludedAreas;
    
public:
    UExcludeNavAreaStateDecorator();
};

