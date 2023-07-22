#include "Boids.h"
#include "Components/SceneComponent.h"

AActor* ABoids::SpawnBoid() {
    return NULL;
}

void ABoids::SetGoal(AActor* Goal) {
}

void ABoids::InitializeBoids() {
}

void ABoids::DestroyAllBoids() {
}

void ABoids::BoidSpawned_Implementation(AActor* Actor) {
}

ABoids::ABoids() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Default Scene Root"));
    this->BillboardComponent = NULL;
    this->World = NULL;
}

