#include "ActionShield.h"
#include "Net/UnrealNetwork.h"

void UActionShield::ShieldBreak() {
}

void UActionShield::SetShieldValue(float Amount) {
}

void UActionShield::SetShieldMax(float Amount) {
}

void UActionShield::PlaySound(FSoundGunfire SoundEvent, bool StoreSound) {
}

void UActionShield::OnRep_ShieldValue() {
}

void UActionShield::OnRep_ShieldMax() {
}

float UActionShield::GetShieldPct() {
    return 0.0f;
}

float UActionShield::GetShieldMax_Implementation() {
    return 0.0f;
}

void UActionShield::DamageShieldMatAmount(float Amount) {
}

void UActionShield::ClientShieldHit_Implementation() {
}

void UActionShield::ApplyShieldDelta(float Delta) {
}

void UActionShield::ApplyShieldDamage(FDamageInfo& ShieldDamageInfo) {
}

void UActionShield::AnimateShieldChange(float From, float To) {
}

void UActionShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActionShield, ShieldMax);
    DOREPLIFETIME(UActionShield, ShieldValue);
}

UActionShield::UActionShield() {
    this->ShieldMax = 5.00f;
    this->ShieldValue = 0.00f;
    this->IncomingDamageScalar = 1.00f;
    this->PhysMatOverride = NULL;
    this->PhysMatAnimationTweenTime = 2.00f;
    this->PhysMatAnimationExponent = 2.00f;
    this->ShieldMaterialMinValue = 0.55f;
    this->ShieldMaterialMaxValue = 1.00f;
    this->ShieldBreakStateName = TEXT("ShieldBreak");
    this->FinishActionOnBroken = true;
    this->ShouldDecay = false;
    this->DecayRate = 0.00f;
    this->ShouldRegen = false;
}

