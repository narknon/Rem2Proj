#include "CollisionResponseOverride.h"

FCollisionResponseOverride::FCollisionResponseOverride() {
    this->Channel = ECC_WorldStatic;
    this->Response = ECR_Ignore;
    this->OriginalResponse = ECR_Ignore;
}

