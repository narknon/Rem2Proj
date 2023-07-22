#include "LadderEnterCondition.h"

ULadderEnterCondition::ULadderEnterCondition() {
    this->LadderParams = NULL;
    this->LadderMustBeEmpty = false;
    this->EntryType = ELadderEntryType::BestApproch;
    this->bValidateEntryArc = false;
    this->EntryArc = 180.00f;
    this->AdditionalOccupancyRungs = 0;
}

