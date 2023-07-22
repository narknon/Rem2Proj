#include "NotificationWidget.h"


void UNotificationWidget::OnStatusChangeEvent(ETechReqStatusChange StatusChangeEvent) {
}

void UNotificationWidget::OnOnlineFailEvent(EGunfireOnlineEvent OnlineFailEvent) {
}

void UNotificationWidget::OnInputModeChanged() {
}

void UNotificationWidget::OnHudVisibilityChanged(AUIHud* HUD, bool Visible) {
}

void UNotificationWidget::OnDismissed(UWidget* Unused) {
}

void UNotificationWidget::OnCinematic(APlayerControllerGunfire* Player, bool bIsInCinematicMode) {
}

UNotificationWidget::UNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
}

