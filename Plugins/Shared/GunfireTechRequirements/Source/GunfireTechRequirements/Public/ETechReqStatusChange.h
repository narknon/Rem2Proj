#pragma once
#include "CoreMinimal.h"
#include "ETechReqStatusChange.generated.h"

UENUM(BlueprintType)
enum class ETechReqStatusChange : uint8 {
    None,
    ContDisconnected,
    ConnectionLost,
    InternetLost,
    LiveLost,
    PlusLost,
    SessionLost,
    UpdateRequired,
    PatchRequired,
    AgeRestricted,
    UserNotLoggedIn,
    NeedsFullInstall,
    NewDlcInstalled,
    DlcLicenseLost,
    Normal,
    Unknown,
    ProfileAgeRestricted,
    PreOrderInstalled,
    CustomMessage,
};

