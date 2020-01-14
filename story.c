#include "header.h"

void story(char Character_name[20]){

  struct inventory main_char_inv;

  main_char_inv.main_weapon = "Broken straight sword";
  main_char_inv.secondary_weapon = "None";
  main_char_inv.slot_1 = "empty";
  main_char_inv.slot_2 = "empty";
  main_char_inv.slot_3 = "empty";
  main_char_inv.slot_4 = "empty";
  main_char_inv.slot_5 = "empty";
  main_char_inv.slot_6 = "empty";
  main_char_inv.slot_7 = "empty";
  main_char_inv.slot_8= "empty";
  main_char_inv.slot_9 = "empty";
  main_char_inv.slot_10 = "empty";

  inventory(main_char_inv);

  return;
}

void inventory(struct inventory main_char_inv){

  printf("Main Weapon: %s\nSecondary Weapon: %s\nInventory Slots:\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n ", main_char_inv.main_weapon, main_char_inv.secondary_weapon, main_char_inv.slot_1, main_char_inv.slot_2, main_char_inv.slot_3, main_char_inv.slot_4, main_char_inv.slot_5, main_char_inv.slot_6, main_char_inv.slot_7, main_char_inv.slot_8, main_char_inv.slot_9, main_char_inv.slot_10);

  return;
}
