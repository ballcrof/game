#include "game.h"
#include "move.h"

void direction(int direction){

  if (direction == 1) {
    /* North */
    current_board.y_val = current_board.y_val + 1;
  }
  else if(direction == 2){
    /* South */
    current_board.y_val = current_board.y_val - 1;
  }
  else if(direction == 3){
    /* East */
    current_board.x_val = current_board.x_val + 1;
  }
  else if(direction == 4){
    /* West */
    current_board.x_val = current_board.x_val - 1;
  }

  return;
}
