#include "game.h"

int main(){
  char Character_name[20];

  printf("Congratulations on starting your adventure\n");

  printf("input name(max 20 characters)\n");

  fgets(Character_name, 20, stdin);

  printf("\n\nWell %syou have quite the journey ahead of you\n", Character_name);

  printf("\n\nyour actions for this game will be: \n\"talk\" + the discriptor for an NPC to talk to them if you're able\n\n\"use\" + the item you want to use if you are able\n\n\"look\" to observe your surroundings \nor \"look\" + object to get a more detailed description\n\n\"pick up\" + an object you want to pick up\n\n\"inventory\" to see what items you currently posses\n\nYou will use the cardinal directions to move throughout this world\n\nand finally just type \"quit to quit the game\"\n\nEnjoy!\n\n");

  setup();

  story_start(Character_name);
  return 0;
}
