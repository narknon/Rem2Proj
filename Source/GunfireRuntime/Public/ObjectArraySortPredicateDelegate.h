#pragma once
#include "CoreMinimal.h"
#include "ObjectArraySortPredicateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FObjectArraySortPredicate, UObject*, A, UObject*, B, UPARAM(Ref) bool&, Result);

