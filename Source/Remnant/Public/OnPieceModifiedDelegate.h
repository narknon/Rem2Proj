#pragma once
#include "CoreMinimal.h"
#include "GraphPosition.h"
#include "EBoardUser.h"
#include "OnPieceModifiedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPieceModified, EBoardUser, User, AActor*, UserPiece, FGraphPosition, Position, bool, bWasAdded);

