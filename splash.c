#include <stdio.h>
#include "splash.h"
#include "sound_player.h"
#include "scene1.h"
#include "scene2_1.h"
#include "scene2_2.h"
#include "utils.h"
#include "render_image.h"

int SpellGranted;


void picth1() {
    ClearScreen();
    M_PlaySound("picth1.wav");

    RenderImage();

    PrintLineWhite("\n\n\nWelcome to Mohatta Palace\n");

    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void Splash() {
    // When the game starts, the screen refreshes every frame and clears the screen
    // The splash screen is a black screen with a white text
    picth1();
    
    ClearScreen();

    //play intro sound 
    M_PlaySound("splash.wav");

    PrintLineWhite("You, a local artist captivated by Mohatta Palace's rich history, are granted a special permit to explore the museum after closing hours.  Legends whisper of a hidden room within the palace walls, said to hold forgotten artifacts and secrets of its past residents.  Armed with a borrowed lantern and a sketchpad, you delve into the dimly lit halls adorned with intricate carvings.  However, as the storm rages outside, the shadows within the palace take on menacing forms. Eerie whispers fill the air, and whispers morph into chilling wails. \n");
    
    M_StopSound();

    Scene1();
}