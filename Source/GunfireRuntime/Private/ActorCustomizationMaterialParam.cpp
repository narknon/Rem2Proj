#include "ActorCustomizationMaterialParam.h"

FActorCustomizationMaterialParam::FActorCustomizationMaterialParam() {
    this->AllMaterials = false;
    this->AllMeshes = false;
    this->ParameterType = EActorCustomizationMaterialParameterType::Scalar;
    this->ScalarValue = 0.00f;
    this->EaseValue = EEaseType::EaseIn;
    this->ApplyValue = EParamApply::ApplyOnAdd;
    this->bUseManualTweenFrom = false;
    this->TweenFrom = 0.00f;
    this->TweenTo = 0.00f;
    this->Duration = 0.00f;
    this->Exponent = 0.00f;
}

