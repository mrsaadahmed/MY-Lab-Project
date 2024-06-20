#include <stdio.h>
#include <string.h>
#include "splash.h"
#include "scene1.h"
#include "sound_player.h"
#include "utils.h"
#include "scene2_1.h"
#include "scene2_2.h"
#include "scene2_2_2.h"



void listenChoice() {
    char choice[10];
    fgets(choice, 10, stdin);
    int index = strcspn(choice, "\n");

    choice[index] = 0;
    if (strcmp(choice, "1") == 0) {
        M_StopSound();
        Scene2_1();
    } else if (strcmp(choice, "2") == 0) {
        M_StopSound();

        if (SpellGranted == 1) {
            Scene2_2_2();
            //TODO: If condition to check if spell has been learned
        } else {
            Scene2_2();
        }
    } else {
        printf("I don't understand. Please answer '1' or '2'.\n");
        listenChoice();
        //recursive call
    }
}

int Scene1Visited;

void Scene1() {
    ClearScreen();
    if (Scene1Visited == 0) {
        M_PlaySound("scene1.wav");
        PrintLineWhite("As the chilling wails echo through the palace, you clutch your lantern, its light flickering nervously. The storm outside intensifies, casting ominous shadows across the ancient walls. \n Ahead, a hallway stretches into darkness, its end obscured by a swaying velvet curtain. You stand at a crossroads, faced with two choices:\n");
    } else {
        M_PlaySound("scene1-short.wav");
        PrintLineWhite("Ahead, a hallway stretches into darkness, its end obscured by a swaying velvet curtain. You stand at a crossroads, faced with two choices:\n");
    }

    Scene1Visited = 1;
    
    if (SpellGranted == 1) {
        PrintLineBlue("1. Investigate the Ancient Tome");
        PrintLineGreen("2. Proceed Beyond the Velvet Curtain");
    } else {
        PrintLineGreen("1. Investigate the Ancient Tome");
        PrintLineRed("2. Proceed Beyond the Velvet Curtain");
    }
    
    printf("> ");

    listenChoice();
}
