#include <stdio.h>
#include "splash.h"
#include "sound_player.h"
#include "scene1.h"
#include "utils.h"

void Splash() {
    ClearScreen();
    M_PlaySound("splash.wav");
    PrintLineWhite("You, a local artist captivated by Mohatta Palace's rich history, are granted a special permit to explore the museum after closing hours.  Legends whisper of a hidden room within the palace walls, said to hold forgotten artifacts and secrets of its past residents.  Armed with a borrowed lantern and a sketchpad, you delve into the dimly lit halls adorned with intricate carvings.  However, as the storm rages outside, the shadows within the palace take on menacing forms. Eerie whispers fill the air, and whispers morph into chilling wails. \n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
    M_StopSound();

    Scene1();
}