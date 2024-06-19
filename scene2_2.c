#include <stdio.h>
#include <string.h>
#include "scene2_2.h"
#include "sound_player.h"
#include "utils.h"

void scene2_2c() {
    ClearScreen();
    PrintLineRed("The nightmare consumes you.");
}

void scene2_2b() {
    ClearScreen();
    M_PlaySound("Scene2_2b.wav");    
    
    PrintLineYellow("Ignoring the ominous warnings echoing in your mind, you push aside the velvet curtain and step into the darkness beyond. The air grows heavy with an unnatural chill, sending shivers down your spine. As you move deeper into the unknown corridor, a faint whispering voice beckons you forward.\n");
    PrintLineYellow("Suddenly, the ground beneath your feet gives way with a deafening crack. You plummet into a hidden trap, landing hard on unforgiving stone. Pain shoots through your body as you struggle to regain your bearings. Above you, the velvet curtain falls back into place, sealing you in darkness.\n");
    PrintLineYellow("With your lantern shattered and no way to climb out, despair sets in. The chilling wails grow louder, mingling with your own frantic cries for help. As consciousness fades, you realize too late the perilous fate that awaited those who dared to trespass beyond the velvet curtain.\n");
    PrintLineYellow("The secrets of Mohatta Palace claim another victim, their mysteries buried with your untimely demise...\n");

    PrintLineMagenta("Press enter to continue...\n");
    getchar();

    scene2_2c();
}

void scene2_2a() {
    ClearScreen();
    M_PlaySound("Scene2_2a.wav");
    PrintLineYellow("Steeling your nerves, you decide to push forward into the unknown. You approach the velvet curtain, determined to uncover the truth behind the whispers and explore the depths of Mohatta Palace despite the growing sense of dread.\n");
    PrintLineYellow("As thunder rumbles outside, you weigh your options carefully, knowing that your decision could lead to discovery or danger. The ancient palace holds its secrets close, and the storm's fury mirrors the uncertainty of what lies ahead. With your lantern guiding the way, you take a deep breath and prepare to face the next chapter of your adventure...\n");
    
    PrintLineMagenta("Press enter to continue...\n");
    getchar();

    scene2_2b();
}


void Scene2_2() {
    scene2_2a();
}

