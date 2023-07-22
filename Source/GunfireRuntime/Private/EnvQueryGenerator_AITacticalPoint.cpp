#include "EnvQueryGenerator_AITacticalPoint.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_AITacticalPoint::UEnvQueryGenerator_AITacticalPoint() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

