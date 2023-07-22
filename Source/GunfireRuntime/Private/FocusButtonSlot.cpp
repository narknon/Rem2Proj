#include "FocusButtonSlot.h"

void UFocusButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UFocusButtonSlot::SetPadding(FMargin InPadding) {
}

void UFocusButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UFocusButtonSlot::UFocusButtonSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

