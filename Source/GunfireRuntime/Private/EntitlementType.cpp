#include "EntitlementType.h"
#include "Templates/SubclassOf.h"

bool UEntitlementType::HasEntitlement(UObject* WorldContextObject, TSubclassOf<UEntitlementType> Entitlement) {
    return false;
}

UEntitlementType::UEntitlementType() {
}

