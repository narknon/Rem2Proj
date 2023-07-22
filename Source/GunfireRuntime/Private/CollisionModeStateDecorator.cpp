#include "CollisionModeStateDecorator.h"

UCollisionModeStateDecorator::UCollisionModeStateDecorator() {
    this->bSetCollisionOnEnter = true;
    this->CollisionOnEnter = ECollisionEnabled::NoCollision;
    this->bOverrideSoftCollisionOnEnter = true;
    this->SoftCollisionOnEnter = ESoftCollisionMode::Disabled;
    this->bRestoreCollision = true;
    this->bRestoreSoftCollision = true;
    this->bSetCollisionOnExit = false;
    this->CollisionOnExit = ECollisionEnabled::NoCollision;
    this->bOverrideSoftCollisionOnExit = false;
    this->SoftCollisionOnExit = ESoftCollisionMode::Disabled;
}

