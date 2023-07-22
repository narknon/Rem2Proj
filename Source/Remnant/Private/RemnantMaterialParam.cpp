#include "RemnantMaterialParam.h"

FRemnantMaterialParam::FRemnantMaterialParam() {
    this->InputType = ERemnantMaterialInputType::CappedPower;
    this->ScalarValue = 0.00f;
    this->ScalarCurveFilter = NULL;
    this->ColorCurveFilter = NULL;
    this->OutputType = ERemnantWeaponMaterialParameterType::Scalar;
    this->MaterialIndex = 0;
}

