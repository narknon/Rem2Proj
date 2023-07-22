#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AINavigationLink.h"
#include "AITacticalPoint.h"
#include "OwnedAIData.h"
#include "SpawnPointList.h"
#include "AIDataContainer.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIDataContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITacticalPoint> TacticalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAINavigationLink> NavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnPointList> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOwnedAIData> OwnedInfo;
    
    UAIDataContainer();
};

