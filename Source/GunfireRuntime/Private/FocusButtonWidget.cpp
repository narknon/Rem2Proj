#include "FocusButtonWidget.h"

void UFocusButtonWidget::SetTexture(UTexture2D* Texture) {
}

void UFocusButtonWidget::SetMaterial(UMaterialInstance* Material) {
}

void UFocusButtonWidget::SetIsFocusable(bool Focusable) {
}

void UFocusButtonWidget::SetForceHover(bool Enabled) {
}

void UFocusButtonWidget::SetForceFocusVisualState(bool Force) {
}

void UFocusButtonWidget::SetCursorHoverable(bool CanCursorHover) {
}

void UFocusButtonWidget::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UFocusButtonWidget::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

void UFocusButtonWidget::SetAllowMouseClick(bool IsMouseClickable) {
}

void UFocusButtonWidget::SetAllowKeyClick(bool IsKeyClickable) {
}

bool UFocusButtonWidget::IsPressed() const {
    return false;
}

bool UFocusButtonWidget::HasInactiveFocus() {
    return false;
}

bool UFocusButtonWidget::HasFocus() {
    return false;
}

FVector2D UFocusButtonWidget::GetAbsoluteCoords() const {
    return FVector2D{};
}

void UFocusButtonWidget::ClickButton() {
}

UFocusButtonWidget::UFocusButtonWidget() {
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->FocusOnMouseEnter = false;
    this->IsFocusable = true;
    this->AutoNavigateFocus = true;
    this->AllowMouseClick = true;
    this->AllowKeyClick = true;
    this->AllowCursorHover = true;
    this->bIgnoreRepeatPresses = false;
    this->bScrollWithInputAxis = false;
    this->bScrollOnlyWhenFocused = false;
    this->ScrollVelocityPerSecond = 600.00f;
    this->bNotifyInactiveFocusLossOnChange = false;
    this->CachedFocusManager = NULL;
}

