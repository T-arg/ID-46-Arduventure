#ifndef ATMCONFIG_H
#define ATMCONFIG_H

// Only what the songs of this game use. Everything else is left out of the music engine.

// effects that are NOT used
#define ATM_FX_FREQ_SLIDE       0
#define ATM_FX_ARP              0
#define ATM_FX_NOISE            0
#define ATM_FX_GLISSANDO        0
#define ATM_FX_CUE              0

// functions: the sketch only uses ATM.play() and ATM.stop()
#define ATM_FUNC_PLAYPAUSE      0
#define ATM_FUNC_PAUSE          0
#define ATM_FUNC_RESUME         0
#define ATM_FUNC_MUTE           0
#define ATM_FUNC_UNMUTE         0
#define ATM_FUNC_TEMPO          0
#define ATM_FUNC_CUE            0
#define ATM_FUNC_SFX            0

// octaves that are NOT used (C2-B2 = 2 ... C7-D7 = 7)
#define ATM_OCTAVE_7            0

#endif
