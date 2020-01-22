#include "game.h"
#include "talking.h"

void talk_options(){
  switch (current_board) {
    case 0:
    starting_area_talk();
    break;

    default:
    printf(" It doesn't look like anyone is willing to talk to you\n");
  }
  return;
}

void starting_area_talk(){
  printf("\n There is nobody to talk to here \n\n");
  return;
}
