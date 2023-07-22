#include "FocusTooltipWidget.h"

UFocusTooltipWidget::UFocusTooltipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TooltipParentWidget = NULL;
    this->ParentWidgetFocusButton = NULL;
}

