#include "header.h"
int current_board;
void story_start(char Character_name[20]){

  struct inventory main_char_inv;
  int actions;
  current_board = 0;

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

  do{
    actions = player_in();

    if(actions == 1){
      inventory(main_char_inv);
    }
    else if(actions == 2){
      printf("use menu option\n");
    }
    else if(actions == 3){
      describe_room();
      printf("look option\n");
    }
    else if(actions == 4){
      printf("north direction\n");
    }
    else if(actions == 5){
      printf("south direction\n");
    }
    else if(actions == 6){
      printf("east direction\n");
    }
    else if(actions == 7){
      printf("west direction\n");
    }
    else if(actions == 8){
      printf("\n\nThanks for playing!!!\n\n");
      break;
    }
    else{
      printf("not a recognised action\n");
    }
  }while(actions != 8);
  return;
}

void inventory(struct inventory main_char_inv){

  printf("Main Weapon: %s\nSecondary Weapon: %s\nInventory Slots:\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n ", main_char_inv.main_weapon, main_char_inv.secondary_weapon, main_char_inv.slot_1, main_char_inv.slot_2, main_char_inv.slot_3, main_char_inv.slot_4, main_char_inv.slot_5, main_char_inv.slot_6, main_char_inv.slot_7, main_char_inv.slot_8, main_char_inv.slot_9, main_char_inv.slot_10);

  return;
}

int player_in(){
  char decisions[30];
  char inventory[30] = "inventory";
  char use[10] = "use";
  char look[10] = "look";
  char north[10] = "north";
  char south[10] = "south";
  char east[10] = "east";
  char west[10] = "west";
  char quit[10] = "quit";

  printf("what will you do?: ");
  fgets(decisions, 30, stdin);

  if(strstr(decisions, inventory)){
    return 1;
  }
  else if(strstr(decisions, use)){
    return 2;
  }
  else if(strstr(decisions, look)){
    return 3;
  }
  else if(strstr(decisions, north)){
    return 4;
  }
  else if(strstr(decisions, south)){
    return 5;
  }
  else if(strstr(decisions, east)){
    return 6;
  }
  else if(strstr(decisions, west)){
    return 7;
  }
  else if(strstr(decisions, quit)){
    return 8;
  }
  return -1;
}

void describe_room(){
  if (current_board == 0) {
    starting_area_desc();
  }
  return;
}

void starting_area_desc(){
  printf("You find yourself alone in a rather unfortunate looking hut.\n It would seem that a night of drinking has left you in yet another sticky situation,\n you can see a faint light from an adjacent room and hear what sounds like the crackling of a fire.\n At your feet lays your sword shattered into peices...\n you cant seem to remember how it happened.");
  return;
}
