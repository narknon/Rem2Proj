#include "EnvQueryGenerator_PathingGrid3D.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_PathingGrid3D::UEnvQueryGenerator_PathingGrid3D() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

