#pragma once
#include "CoreMinimal.h"
#include "TabGroup.h"
#include "TabFocusInfo.generated.h"

USTRUCT(BlueprintType)
struct FTabFocusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTabGroup> Groups;
    
    GUNFIRERUNTIME_API FTabFocusInfo();
};

