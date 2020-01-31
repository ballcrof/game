#include "game.h"
#include "talking.h"
#include "look.h"
#include "move.h"

void story_start(char Character_name[20]){

  struct inventory main_char_inv;
  struct board first_room;
  int actions;

  current_board = map[3][3];

  main_char_inv.main_weapon = "None";
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
    char *decisions[30];
    actions = player_in(decisions);
    switch (actions) {
      case 0:/*talk option*/
      talk_options();
      break;

      case 1:/*inventory option*/
      inventory(main_char_inv);
      break;

      case 2:/*use option*/
      printf("use menu option\n");
      break;

      case 3:/*look option*/
      describe_room();
      break;

      case 4:/*north option*/
      direction(1);
      printf("\nPosition: %d %d\n\n", current_board.x_val, current_board.y_val);
      break;

      case 5:/*south option*/
      direction(2);
      printf("\nPosition: %d %d\n\n", current_board.x_val, current_board.y_val);
      break;

      case 6:/*east option*/
      direction(3);
      printf("\nPosition: %d %d\n\n", current_board.x_val, current_board.y_val);
      break;

      case 7:/*west option*/
      direction(4);
      printf("\nPosition: %d %d\n\n", current_board.x_val, current_board.y_val);
      break;

      case 8:/*quit option*/
      return;
      printf("\n\nThanks for playing!!!\n\n");
      break;

      case 9:/*pickup option*/
      printf("pickup option\n");
      break;

      default:/*if not a recognised option*/
      printf("not a recognised action\n");
    }

  }while(1 == 1);/*keeps asking for users choice unless "quit" is typed*/
  return;
}

void inventory(struct inventory main_char_inv){

  printf("Main Weapon: %s\nSecondary Weapon: %s\nInventory Slots:\n%s %s\n%s %s\n%s %s\n%s %s\n%s %s\n\n", main_char_inv.main_weapon, main_char_inv.secondary_weapon, main_char_inv.slot_1, main_char_inv.slot_2, main_char_inv.slot_3, main_char_inv.slot_4, main_char_inv.slot_5, main_char_inv.slot_6, main_char_inv.slot_7, main_char_inv.slot_8, main_char_inv.slot_9, main_char_inv.slot_10);

  return;
}

int player_in(char *decision[30]){
  char decisions[30];
  char inventory[30] = "inventory";
  char use[10] = "use";
  char look[10] = "look";
  char north[10] = "north";
  char south[10] = "south";
  char east[10] = "east";
  char west[10] = "west";
  char quit[10] = "quit";
  char pickup[30] = "pick up";
  char talk[10] = "talk";

  printf("what will you do?: ");
  fgets(decisions, 30, stdin);

  *decision = decisions;

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
  else if(strstr(decisions, pickup)){
    return 9;
  }
  else if(strstr(decisions, talk)){
    return 0;
  }
  return -1;
}
