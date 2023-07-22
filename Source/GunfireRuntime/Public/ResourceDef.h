#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ResourceType.h"
#include "ResourceDef.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UResourceDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceType> ResourceTypes;
    
    UResourceDef();
};

