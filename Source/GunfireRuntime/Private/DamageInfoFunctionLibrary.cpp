#include "DamageInfoFunctionLibrary.h"

FDamageInfo UDamageInfoFunctionLibrary::Conv_RepInfoToDamageInfo(const FReplicatedDamageInfo& InRepInfo) {
    return FDamageInfo{};
}

FReplicatedDamageInfo UDamageInfoFunctionLibrary::Conv_DamageInfoToRepInfo(const FDamageInfo& InInfo) {
    return FReplicatedDamageInfo{};
}

UDamageInfoFunctionLibrary::UDamageInfoFunctionLibrary() {
}

