#pragma once
#include "CoreMinimal.h"
#include "EGunfireOnlineEvent.generated.h"

UENUM(BlueprintType)
enum class EGunfireOnlineEvent : uint8 {
    Normal,
    GenericFailure,
    ConnectionLost,
    SessionLost,
    SessionFull,
    SessionNonexistant,
    AlreadyInSession,
    CreateSessionFailed,
    InternetLost,
    FailedToJoinAny,
    CouldNotGetAddress,
    ChatRestrictions,
    FriendListFailed,
    MatchmakingUnavailable,
    VersionMismatch,
    Destroying,
    ChangeSessionFailed,
    OfflineSessionStarted,
    GameModeMismatch,
    KickedFromSession,
    BannedFromSession,
    AFK,
    MissingDLC,
    SessionChanged,
    JoinConnectionLost,
    SessionInvalid,
    QuestMultiplayerDisabled,
    StartSessionFailed,
};

