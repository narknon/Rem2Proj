#pragma once
#include "CoreMinimal.h"
#include "EAttribOwner.generated.h"

UENUM()
enum class EAttribOwner : int8 {
    Invalid = -1,
    Vertex,
    Point,
    Prim,
    Detail,
};

