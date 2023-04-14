/**
 * @file sound.h
 *
 * Interface of functions setting up the audio pipeline.
 */
#ifndef __SOUND_H__
#define __SOUND_H__

extern BOOLEAN gbSndInited;

void snd_update(BOOL bStopAll);
void snd_stop_snd(TSnd *pSnd);
BOOL snd_playing(TSnd *pSnd);
void snd_play_snd(TSnd *pSnd, int lVolume, int lPan);
TSnd *sound_file_load(const char *path);
void sound_file_cleanup(TSnd *sound_file);
void snd_init(HWND hWnd);
void sound_cleanup();
void music_stop();
void music_start(int nTrack);
void sound_disable_music(BOOL disable);
int sound_get_or_set_music_volume(int volume);
int sound_get_or_set_sound_volume(int volume);

/* data */

extern BOOLEAN gbMusicOn;
extern BOOLEAN gbSoundOn;
extern BOOLEAN gbDupSounds;

#endif /* __SOUND_H__ */
