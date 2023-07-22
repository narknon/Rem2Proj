#include "AINavigationStateDecorator.h"

UAINavigationStateDecorator::UAINavigationStateDecorator() {
    this->NavigationType = ENavigationType::Ground;
    this->bRestoreOnExit = true;
}

