#include <stdio.h>
#include <string.h>
#include "scene2_1_2.h"
#include "sound_player.h"
#include "utils.h"

void scene2_1_2a() {
    ClearScreen();
    M_PlaySound("scene2_1_2a.wav");
    PrintLineWhite("Excited by the power you now possess, you decide to test the spell Zaibeeeenaaa right away. You chant the incantation,\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2b() {
    ClearScreen();
    M_PlaySound("spell.wav");
    PrintLineWhite("Mujhe kaam batao, Mai kiya karu, Mai kis ko khawu?,\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2c() {
    ClearScreen();
    M_PlaySound("scene2_1_2c.wav");
    PrintLineWhite("and the hallway before you glows with an ethereal light, revealing hidden markings and secret passageways.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2d() {
    ClearScreen();
    M_PlaySound("scene2_1_2d.wav");
    PrintLineWhite("However, the magical energy attracts unseen entities lurking in the shadows. Dark, ghostly figures materialize, drawn to the light and the power you have unleashed. Panic grips you as the figures advance, their chilling presence overwhelming your senses.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2e() {
    ClearScreen();
    M_PlaySound("scene2_1_2e.wav");
    PrintLineWhite("In your terror, you forget the spell's incantation and drop your lantern. The light extinguishes, plunging you into darkness. The entities surround you, their whispers turning into deafening wails. You try to flee, but the entities close in, their icy touch draining your strength.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2f() {
    ClearScreen();
    M_PlaySound("scene2_1_2f.wav");
    PrintLineWhite("As you fall to the ground, you realize too late the peril of wielding powers you do not fully understand. The last thing you hear is the echo of your own scream, mingling with the wails of the entities that now claim you.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}
void scene2_1_2g() {
    ClearScreen();
    M_PlaySound("scene2_1_2g.wav");
    PrintLineWhite("The secrets of Mohatta Palace remain hidden, and another soul is lost to its ancient, malevolent forces.\n");
    PrintLineMagenta("Press enter to continue...\n");
    getchar();
}

void scene2_1_2h() {
    ClearScreen();
    PrintLineRed("The nightmare consumes you.");
}

void Scene2_1_2() {
    scene2_1_2a();
    scene2_1_2b();
    scene2_1_2c();
    scene2_1_2d();
    scene2_1_2e();
    scene2_1_2f();
    scene2_1_2g();
    scene2_1_2h();
}

