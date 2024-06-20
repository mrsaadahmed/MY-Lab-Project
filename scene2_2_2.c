#include <stdio.h>
#include <string.h>
#include "scene2_2_2.h"
#include "sound_player.h"
#include "utils.h"

void scene2_2_2c() {
    ClearScreen();
    M_PlaySound("scene2_2_2c.wav");
    PrintLineBlue("To Be Continued...\n");
}

void scene2_2_2b() {
    ClearScreen();
    M_PlaySound("scene2_2_2b.wav");
    PrintLineWhite("The light reveals hidden passages and ancient markings on the walls, guiding you safely through the treacherous corridor. As you proceed, you notice a hidden door that was previously obscured. You use the spell to reveal the mechanism to open it, and the door swings open with a creak. \n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
    scene2_2_2c();
}


void scene2_2_2a() {
    ClearScreen();
    M_PlaySound("spell.wav");
    PrintLineWhite("Mujhe kaam batao, Mai kiya karu, Mai kis ko khawu?,\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
    scene2_2_2b();
}

void Scene2_2_2() {
    ClearScreen();
    M_PlaySound("scene2_2_2a.wav");

    PrintLineWhite("With the knowledge from the tome and the spell Zaibeeeenaaa at your disposal, you feel a surge of confidence. You push aside the velvet curtain and step into the darkness beyond, ready to face whatever lies ahead. The air grows heavy with an unnatural chill, but you summon the spell, and the hallway illuminates with an ethereal light. \n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
    scene2_2_2a();
}
