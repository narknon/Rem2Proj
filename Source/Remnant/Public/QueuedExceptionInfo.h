#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "CachedItemInfo.h"
#include "CachedProgressionInfo.h"
#include "CachedTraitInfo.h"
#include "InitialItemInfo.h"
#include "QueuedExceptionInfo.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FQueuedExceptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedItemInfo QueuedItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedTraitInfo QueuedTraitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedProgressionInfo QueuedProgressionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInitialItemInfo> InitialInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ExceptionTimeOutHandle;
    
    FQueuedExceptionInfo();
};

