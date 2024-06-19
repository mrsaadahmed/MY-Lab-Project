#include <stdio.h>
#include <string.h>
#include "splash.h"

int main() {
  printf("Starting the game...\n");
  Splash();

  // printf("The wind whispers secrets through the ancient trees of the Whispering Woods. Sunlight struggles to pierce the dense canopy, casting long, eerie shadows on the forest floor.\n\n");
  // printf("Rumors abound of a hidden library, a treasure trove of forgotten knowledge, buried deep within these woods. You, a scholar with an insatiable thirst for wisdom, have become consumed by this legend.\n\n");
  // printf("Standing at the edge of the woods, a sense of foreboding hangs heavy in the air. Do you dare venture in?\n\n");

  // char choice[10];
  // while (1) {
  //   printf("> ");
  //   fgets(choice, 10, stdin); // Read user input with fgets
  //   choice[strcspn(choice, "\n")] = 0; // Remove trailing newline from input

  //   if (strcmp(choice, "yes") == 0 || strcmp(choice, "y") == 0) {
  //     printf("With a determined spirit, you step into the woods, the dense foliage swallowing the sunlight whole. The path ahead seems to twist and turn, a maze of gnarled branches and fallen leaves.\n\n");
  //     // Call function for next scene (e.g., entrance of the library)
  //     break;
  //   } else if (strcmp(choice, "no") == 0 || strcmp(choice, "n") == 0) {
  //     printf("Perhaps another day, scholar. The whispers of the woods can be unnerving, even for the most curious minds.\n\n");
  //     return 0;
  //   } else {
  //     printf("I don't understand. Please answer 'yes' or 'no'.\n\n");
  //   }
  // }

  return 0;
}