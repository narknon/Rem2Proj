#include "ProjectileVisualizationParams.h"

FProjectileVisualizationParams::FProjectileVisualizationParams() {
    this->SimMode = EProjectileSimMode::HitsOnly;
    this->BounceMode = EProjectileBounceMode::DoFullSimulation;
    this->MaxBounces = 0;
    this->FinalBounceMaximumDistance = 0.00f;
    this->SpeedOverride = 0.00f;
    this->MaxSimulationTime = 0.00f;
    this->ProjectileVisualization = NULL;
}

