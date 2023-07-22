#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "ENavAreaFlag.h"
#include "AINavArea.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAINavArea : public UNavArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNullArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavAreaFlag AreaFlag;
    
public:
    UAINavArea();
};

