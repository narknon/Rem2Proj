#include "ActorQueryShapeDetails.h"

FActorQueryShapeDetails::FActorQueryShapeDetails() {
    this->ShapeType = EQueryShapeType::Sphere;
    this->MinRadius = 0.00f;
    this->MaxRadius = 0.00f;
}

