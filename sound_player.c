#include <stdio.h>
#include <windows.h>
#include "sound_player.h"

void M_PlaySound(char* filename) { 
    char filepath[MAX_PATH];
    sprintf(filepath, ".\\sounds\\%s", filename); 
    PlaySound(TEXT(filepath), NULL, SND_FILENAME | SND_ASYNC);
}

void M_StopSound() {
    PlaySound(NULL, NULL, SND_FILENAME);
}