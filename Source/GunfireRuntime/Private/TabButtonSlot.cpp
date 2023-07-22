#include "TabButtonSlot.h"

void UTabButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UTabButtonSlot::SetPadding(FMargin InPadding) {
}

void UTabButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UTabButtonSlot::UTabButtonSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

