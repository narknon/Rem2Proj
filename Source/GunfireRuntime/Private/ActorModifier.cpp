#include "ActorModifier.h"
#include "Net/UnrealNetwork.h"

void UActorModifier::SetOwner(AActor* NewOwner) {
}

void UActorModifier::SetLevel(int32 NewLevel) {
}

void UActorModifier::ScaleStat(FName Stat, float Scalar, bool AutoInitValue) {
}

void UActorModifier::PostComputeStats() {
}




void UActorModifier::OnRep_Level() {
}


void UActorModifier::OnLevelChanged_Implementation() {
}






void UActorModifier::NotifyTakeDamage(const FDamageInfo& DamageInfo) {
}

void UActorModifier::NotifyHitTarget(const FDamageInfo& DamageInfo) {
}

void UActorModifier::ModifyStat(FName Stat, float Value) {
}


void UActorModifier::ModifyIncomingHealing_Implementation(FHealingInfo& Info) {
}

void UActorModifier::ModifyIncomingDamage_Implementation(FDamageInfo& Info) {
}

void UActorModifier::ModifyHealing_Implementation(FHealingInfo& Info) {
}

void UActorModifier::ModifyDamage_Implementation(FDamageInfo& Info) {
}

float UActorModifier::GetStat(FName Stat) {
    return 0.0f;
}

ACharacter* UActorModifier::GetOwningCharacter() const {
    return NULL;
}

AActor* UActorModifier::GetOwner() const {
    return NULL;
}

FInspectInfo UActorModifier::GetInspectInfo(AActor* Actor, int32 InspectLevel) {
    return FInspectInfo{};
}

FString UActorModifier::GetDebugText_Implementation() {
    return TEXT("");
}

void UActorModifier::FilterIncomingHealing_Implementation(FHealingInfo& HealingInfo, float& HealingOut, bool& ShouldApplyHealing) {
}

void UActorModifier::FilterIncomingFallDamage_Implementation(const float& Damage, float& DamageInfoOut, bool& ShouldApplyDamage) {
}

void UActorModifier::FilterIncomingDamage_Implementation(FDamageInfo& DamageInfo, float& DamageOut, bool& ShouldApplyDamage) {
}

void UActorModifier::ComputeStats() {
}

void UActorModifier::ComputeDerivedStats() {
}

void UActorModifier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActorModifier, Level);
}

UActorModifier::UActorModifier() {
    this->Scope = EActorModifierScope::StatsOnly;
    this->Level = 0;
    this->Icon = NULL;
    this->InspectStats = NULL;
    this->Owner = NULL;
    this->StatsComponent = NULL;
}

