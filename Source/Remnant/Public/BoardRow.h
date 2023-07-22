#pragma once
#include "CoreMinimal.h"
#include "BoardPositionInfo.h"
#include "BoardRow.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FBoardRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoardPositionInfo> BoardRow;
    
    FBoardRow();
};

