#include "ComputedStats.h"

float UComputedStats::ScaleValueByLevel(int32 Level, float Value, float Inc, float Exp) const {
    return 0.0f;
}

void UComputedStats::ScaleStat(FName Stat, float Scalar, bool AutoInitValue) {
}

void UComputedStats::PostComputeStats(UStatsComponent* Stats) {
}




void UComputedStats::ModifyStat(FName Stat, float Value) {
}

bool UComputedStats::HasStat(FName Stat) {
    return false;
}

AActor* UComputedStats::GetStatsOwner() {
    return NULL;
}

float UComputedStats::GetStat(FName Stat, bool ApplyMods) {
    return 0.0f;
}

void UComputedStats::ComputeStats(UStatsComponent* Stats) {
}

void UComputedStats::ComputeDerivedStats(UStatsComponent* Stats) {
}

UComputedStats::UComputedStats() {
    this->StatsComponent = NULL;
}

