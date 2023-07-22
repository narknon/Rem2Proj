#include "EnvQueryTest_Jump.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Jump::UEnvQueryTest_Jump() {
    this->JumpOriginContext = UEnvQueryContext_Querier::StaticClass();
    this->GravityScale = 1.00f;
    this->ArcMethod = EAutoArcType::ArcHeight;
    this->ArcHeight = 100.00f;
    this->JumpSpeed = 1000.00f;
    this->RetractDistance = 30.00f;
}

