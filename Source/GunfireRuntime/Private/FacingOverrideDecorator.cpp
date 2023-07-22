#include "FacingOverrideDecorator.h"

UFacingOverrideDecorator::UFacingOverrideDecorator() {
    this->NewFacing = CharacterFacing::MoveDir;
    this->bOneTimeCheck = false;
}

