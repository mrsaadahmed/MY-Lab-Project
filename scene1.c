#include <stdio.h>
#include <string.h>
#include "scene1.h"
#include "sound_player.h"
#include "utils.h"

void listenChoice();

void scene1() {
    M_PlaySound("scene1.wav");

    PrintLineWhite("As the chilling wails echo through the palace, you clutch your lantern, its light flickering nervously. The storm outside intensifies, casting ominous shadows across the ancient walls. \n Ahead, a hallway stretches into darkness, its end obscured by a swaying velvet curtain. You stand at a crossroads, faced with two choices:\n");
    
    PrintLineGreen("1. Investigate the Ancient Tome");
    PrintLineRed("2. Proceed Beyond the Velvet Curtain");
    
    printf("> ");

    listenChoice();
}

void listenChoice() {
    char choice[10];
    fgets(choice, 10, stdin);
    choice[strcspn(choice, "\n")] = 0;

    if (strcmp(choice, "1") == 0) {
        M_StopSound();
        //TODO: Move to scene2
    } else if (strcmp(choice, "2") == 0) {
        M_StopSound();
        // TODO: Move to scene1 death
    } else {
        printf("I don't understand. Please answer '1' or '2'.\n");
        listenChoice();
        //recursive call
    }
}