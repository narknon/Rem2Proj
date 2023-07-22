#include "SpawnTable.h"

void USpawnTable::GenerateWithSeed(UObject* WorldContextObject, int32 Level, int32 Rating, const TArray<FName>& InTags, FSpawnList& SpawnList, ESpawnType Type, int32 RandomSeed) {
}

void USpawnTable::Generate(UObject* WorldContextObject, int32 Level, int32 Rating, const TArray<FName>& InTags, FSpawnList& SpawnList, ESpawnType Type) {
}

USpawnTable::USpawnTable() {
    this->TableType = ESpawnTableType::Table;
    this->TableGroupRollMin = 0;
    this->TableGroupRollMax = 1;
}

