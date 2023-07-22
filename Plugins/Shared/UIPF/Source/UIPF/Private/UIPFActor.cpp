#include "UIPFActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

void AUIPFActor::TrySleep() {
}

void AUIPFActor::DelayPhysEnabled() {
}

AUIPFActor::AUIPFActor() {
    this->MyISM = NULL;
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComp"));
    this->BlockingCollisionOverideSMComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Blocking Collision Override Mesh"));
    this->SM = NULL;
    this->SkelMesh = NULL;
}

