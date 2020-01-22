#include "game.h"
#include "talking.h"

void talk_options(){
  switch (current_board.x_val) {
    case 0:

    switch (current_board.y_val) {

      case 0:
      starting_area_talk();
      break;
    }
    break;

    default:
    printf("\n It doesn't look like anyone is willing to talk to you\n\n");
  }
  return;
}

void starting_area_talk(){
  printf("\n There is nobody to talk to here \n\n");
  return;
}
