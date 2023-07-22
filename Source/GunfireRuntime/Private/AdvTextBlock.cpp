#include "AdvTextBlock.h"

void UAdvTextBlock::StartTextFill(bool bStartFromBeginning) {
}

void UAdvTextBlock::SetText(const FText& newText, float NewFillSpeed, bool bShouldAutoStartFillIn) {
}

void UAdvTextBlock::SetLineHeightPercentage(float InLineHeightPercentage) {
}

void UAdvTextBlock::SetCurrentPage(int32 Page) {
}

void UAdvTextBlock::PauseTextFill() {
}

void UAdvTextBlock::OnDeviceChanged(int32 ControllerId, EInputDevice NewDevice) {
}

bool UAdvTextBlock::IsTextFillPaused() const {
    return false;
}

bool UAdvTextBlock::IsReady() {
    return false;
}

int32 UAdvTextBlock::GetNumPages() const {
    return 0;
}

void UAdvTextBlock::ForceRecompute() {
}

FVector2D UAdvTextBlock::ComputeDesiredSize() {
    return FVector2D{};
}

void UAdvTextBlock::CompleteTextFill() {
}

void UAdvTextBlock::ClearText() {
}

UAdvTextBlock::UAdvTextBlock() {
    this->AutoWrapText = false;
    this->Justification = ETextJustify::Left;
    this->WrapTextAt = 0.00f;
    this->LineHeightPercentage = 1.00f;
    this->FillInSpeed = 0.00f;
    this->RebuildAfterDeviceChange = true;
    this->bAutoStartFillIn = true;
}

