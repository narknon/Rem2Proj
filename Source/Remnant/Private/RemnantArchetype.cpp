#include "RemnantArchetype.h"

TSoftClassPtr<AItem> URemnantArchetype::GetEngramItem(TSoftClassPtr<URemnantArchetype> ArchetypeSoft) {
    return NULL;
}

TSoftClassPtr<UArchetype> URemnantArchetype::GetArchetypeTrait(TSoftClassPtr<URemnantArchetype> ArchetypeSoft) {
    return NULL;
}

URemnantArchetype::URemnantArchetype() {
    this->Difficulty = 0;
    this->Image = NULL;
}

