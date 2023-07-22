#include "OnlineFriendDetails.h"

FOnlineFriendDetails::FOnlineFriendDetails() {
    this->IsPlayingThisGame = false;
    this->IsJoinable = false;
    this->HaveInvite = false;
    this->HasVoiceSupport = false;
    this->FriendState = EOnlineSessionSearchState::Idle;
}

