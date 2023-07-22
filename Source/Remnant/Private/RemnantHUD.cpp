#include "RemnantHUD.h"








bool ARemnantHUD::ShouldShowSubtitles() const {
    return false;
}

bool ARemnantHUD::ShouldShowHealthBars() const {
    return false;
}







bool ARemnantHUD::HasInvalidDialog() const {
    return false;
}









ARemnantHUD::ARemnantHUD() {
    this->ContextActor = NULL;
}

