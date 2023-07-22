#include "AIDataGenerationSettings.h"

UAIDataGenerationSettings::UAIDataGenerationSettings() {
    this->TraceChannel = ECC_WorldStatic;
    this->QueryComplexCollision = false;
    this->CoverCheckIncrement = 5.00f;
    this->bGenerateCover = true;
    this->MinimumCoverWidth = -1.00f;
    this->CoverTestDistance = 100.00f;
    this->LongEdgeLength = 100.00f;
    this->LowCoverHeight = 75.00f;
    this->LowCoverOpenTestDistance = 150.00f;
    this->LowCoverOpenTestHeight = 125.00f;
    this->LowCoverOpenTestSize = -1.00f;
    this->HighCoverHeight = -1.00f;
    this->HighCornerCoverGap = 20.00f;
    this->HighCornerCoverBottom = 10.00f;
    this->MaximumFallDistance = 700.00f;
    this->VaultSettings.AddDefaulted(5);
    this->SpawnGenerators.AddDefaulted(1);
}

