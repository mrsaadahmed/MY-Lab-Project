#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "scene2_1.h"
#include "splash.h"
#include "sound_player.h"
#include "utils.h"
#include "scene2_2.h"
#include "scene1.h"
#include "scene2_1_2.h"


void scene2_1_listenChoice() {
    char choice[10];
    fgets(choice, 10, stdin);
    int index = strcspn(choice, "\n");

    choice[index] = 0;
    if (strcmp(choice, "1") == 0) {
        Scene1();
    } else if (strcmp(choice, "2") == 0) {
        Scene2_1_2();
    } else {
        printf("I don't understand. Please answer '1' or '2'.\n");
        scene2_1_listenChoice();
        //recursive call
    }

} 

void scene2_1a() {
    ClearScreen();    
    M_PlaySound("scene2_1a.wav"); // play sound
    PrintLineWhite("You gently open the tome, its brittle pages rustling softly. The ancient script is difficult to decipher, but you recognize some symbols from previous explorations. The sketches depict strange rituals and a map of the palace, indicating the location of a hidden chamber beneath the east wing.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}
    
void scene2_1b() {
    ClearScreen();    
    M_PlaySound("scene2_1b.wav"); // play sound
    PrintLineWhite("As you study the tome, you notice a loose page. Carefully removing it, you discover a detailed drawing of an ornate key and a passage written in a forgotten language. The symbols seem to align with markings you saw earlier near the velvet curtain.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1c() {
    SpellGranted = 1;
    ClearScreen();    
    M_PlaySound("scene2_1c.wav");
    PrintLineWhite("Suddenly, you realize that you have learned a spell: Zaibeeeenaaa, a spell that allows you to reveal hidden objects and passages. You have gained important knowledge about the hidden room and a powerful spell. With this newfound information, you can now:\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
    PrintLineGreen("1. Return to the Hallway");
    PrintLineRed("2. Try Out the Spell");
    
    printf("> ");
    scene2_1_listenChoice();
}

void Scene2_1() {
    ClearScreen();
    scene2_1a();
    scene2_1b();
    scene2_1c();
}


