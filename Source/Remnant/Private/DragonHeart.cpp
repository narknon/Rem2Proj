#include "DragonHeart.h"

void ADragonHeart::VerifyQuantity() {
}

void ADragonHeart::Regenerate() {
}

void ADragonHeart::OnPoolValueChanged(UVitalityComponent* PoolComponent) {
}

int32 ADragonHeart::GetMaxCurrentQuantity() {
    return 0;
}

ADragonHeart::ADragonHeart() {
    this->NumCharges = 3;
    this->UpgradeItemBP = NULL;
    this->DHPoolComponent = NULL;
}

