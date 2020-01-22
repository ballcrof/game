#include "game.h"

void setup(struct board first_room){
  struct board board__0__1;
  struct board board__0_N1;
  struct board board__1__0;
  struct board board_N1__0;
  struct board board__1__1;
  struct board board__1_N1;
  struct board board_N1__1;
  struct board board_N1_N1;
  /*struct board board__0__1;
  struct board board__0__1;
  struct board board__0__1;*/

  current_board = first_room;

  first_room.room_type = "up_right";

  board_0_1.room_type = "open_down";
  board_0_1.South = &current_board;
  first_room.North = &board_0_1;

  return;
}
