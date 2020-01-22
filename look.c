#include "header.h"

void describe_room(){
  if (current_board == 0) {
    starting_area_desc();
  }
  return;
}

void starting_area_desc(){
  printf("\n You find yourself alone in a ramshackle hut.\n It would seem that a night of drinking has left you in yet another sticky situation,\n you can see a faint light from an adjacent room(to the north) and hear what sounds like the crackling of a fire.\n At your feet lays your sword shattered into peices...\n you cant seem to remember what happened.\n There is a door to the south you assume is the exit\n\n");
  return;
}
