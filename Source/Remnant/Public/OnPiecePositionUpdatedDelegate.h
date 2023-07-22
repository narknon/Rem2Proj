#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphPosition.h"
#include "EBoardUser.h"
#include "OnPiecePositionUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnPiecePositionUpdated, EBoardUser, User, AActor*, UserPiece, FGraphPosition, StartPosition, FVector, StartWorldPosition, FGraphPosition, EndPosition, FVector, EndWorldPosition);

