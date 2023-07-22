#include "EnvQueryTest_WaterHeight.h"

UEnvQueryTest_WaterHeight::UEnvQueryTest_WaterHeight() {
    this->WaterTraceChannel = ECC_WorldStatic;
    this->Compare = CompareOp::GreaterThan;
    this->WaterHeight = 10.00f;
}

