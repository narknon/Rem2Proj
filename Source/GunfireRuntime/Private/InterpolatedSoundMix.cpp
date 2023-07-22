#include "InterpolatedSoundMix.h"

#include "AudioDeviceManager.h"
#include "Sound/SoundMix.h"
#include "AudioEffect.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Sound/SoundClass.h"
#include "Widgets/Notifications/SNotificationList.h"

void UInterpolatedSoundMix::SetInterpolatePos(float Pos) {
}

UInterpolatedSoundMix::UInterpolatedSoundMix() {
    this->EQCurve = NULL;
    this->InitialInterpolatePos = 1.00f;
}

void UInterpolatedSoundMix::BeginDestroy()
{
    UObject::BeginDestroy();
}

FString UInterpolatedSoundMix::GetDesc( void )
{
    return( FString::Printf( TEXT( "Adjusters: %d" ), SoundClassEffects.Num() ) );
}

#if WITH_EDITOR
void UInterpolatedSoundMix::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    
}
#endif

