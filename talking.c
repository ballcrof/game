#include "header.h"

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
  printf(" There is nobody to talk to here \n\n");
  return;
}
