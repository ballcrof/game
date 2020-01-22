#include "game.h"
#include "look.h"

void describe_room(){
  switch (current_board.x_val) {
    case 0:

    switch (current_board.y_val) {

      case 0:
      printf("\n You find yourself alone in a ramshackle hut.\n It would seem that a night of drinking has left you in yet another sticky situation,\n you can see a faint light from an adjacent room(to the north) and hear what sounds like the crackling of a fire.\n At your feet lays your sword shattered into peices...\n you cant seem to remember what happened.\n There is a door to the south you assume is the exit\n\n");
      break;

      case 1:
      printf("\n You see there is a fire blazing. Everything around you is going up in flames!\n\n");
      break;
    }
    break;

    case 1:

    switch (current_board.y_val) {

      case 0:
      printf("\n mana mana\n\n");
      break;
    }
    break;

    default:
    printf("\n unknown room\n\n");
  }
  return;
}

/*void starting_area_desc(){
  printf("\n You find yourself alone in a ramshackle hut.\n It would seem that a night of drinking has left you in yet another sticky situation,\n you can see a faint light from an adjacent room(to the north) and hear what sounds like the crackling of a fire.\n At your feet lays your sword shattered into peices...\n you cant seem to remember what happened.\n There is a door to the south you assume is the exit\n\n");
  return;
}*/
