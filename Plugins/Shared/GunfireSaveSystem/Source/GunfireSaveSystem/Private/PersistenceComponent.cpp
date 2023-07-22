#include "PersistenceComponent.h"

UPersistenceComponent::UPersistenceComponent() {
    this->UniqueId = 0;
    this->HasModifiedSaveValues = false;
    this->PersistTransform = false;
    this->PersistDestroyed = false;
}

