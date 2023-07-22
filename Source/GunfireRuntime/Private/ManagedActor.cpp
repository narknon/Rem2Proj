#include "ManagedActor.h"

FString AManagedActor::GetDebugInfo(int32 DebugLevel) {
    return TEXT("");
}

AManagedActor::AManagedActor() {
    this->EnableAnimOptimizations = true;
    this->EnableAnimSignificanceOptimizations = true;
    this->AnimSignificanceScalar = 1.00f;
    this->SuspendClothWhenNotVisible = true;
    this->EnableTickRateOptimizations = false;
}

