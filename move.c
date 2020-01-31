#include "game.h"
#include "move.h"

void direction(int direction){

  if (direction == 1) {
    if(current_board.North == 1){
      current_board = map[current_board.x_val][current_board.y_val + 1];
    }
    else{
      printf("\n\tYou cannot move this way\n");
    }
    /* North */
  }
  else if(direction == 2){
    /* South */
    if(current_board.South == 1){
      current_board = map[current_board.x_val][current_board.y_val - 1];
    }
    else{
      printf("\n\tYou cannot move this way\n");
    }
  }
  else if(direction == 3){
    /* East */
    if(current_board.East == 1){
      current_board = map[current_board.x_val + 1][current_board.y_val];
    }
    else{
      printf("\n\tYou cannot move this way\n");
    }
  }
  else if(direction == 4){
    /* West */
    if(current_board.West == 1){
      current_board = map[current_board.x_val - 1][current_board.y_val];
    }
    else{
      printf("\n\tYou cannot move this way\n");
    }
  }

  return;
}
