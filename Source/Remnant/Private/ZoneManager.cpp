#include "ZoneManager.h"
#include "Templates/SubclassOf.h"

int32 UZoneManager::UnlockAllWaypoints() {
    return 0;
}

AZoneActor* UZoneManager::GetZoneForSlot(int32 SlotID) {
    return NULL;
}

AZoneActor* UZoneManager::GetZoneForActor(AActor* Actor) {
    return NULL;
}

AZoneActor* UZoneManager::GetZoneByNameID(const UObject* WorldContextObject, const FName& NameID) {
    return NULL;
}

AZoneActor* UZoneManager::GetZoneByID(const UObject* WorldContextObject, int32 ID) {
    return NULL;
}

UZoneManager* UZoneManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

FString UZoneManager::GetBiomeForActor(AActor* Actor) {
    return TEXT("");
}

void UZoneManager::DestroyZone(AZoneActor* Zone) {
}

AZoneActor* UZoneManager::CreateZone(int32 SlotID, TSubclassOf<AZoneActor> ZoneActorBP, int32 SeedOverride) {
    return NULL;
}

UZoneManager::UZoneManager() {
}

