#include "game.h"

void setup(){

  struct board room;

  room.room_type = "up_down";
  room.description = "\n\t You find yourself alone in a ramshackle hut.\n It would seem that a night of drinking has left you in yet another sticky situation,\n you can see a faint light from an adjacent room(to the north) and hear what sounds like the crackling of a fire.\n At your feet lays your sword shattered into peices...\n you cant seem to remember what happened.\n There is a door to the south you assume is the exit\n\n";
  room.x_val = 3;
  room.y_val = 3;
  room.North = 1;
  room.South = 1;
  room.East = 0;
  room.West = 0;
  map[3][3] = room;

  room.room_type = "open_down";
  room.description = "\n\t You see there is a fire blazing. Everything around you is going up in flames!\n\n";
  room.x_val = 3;
  room.y_val = 4;
  room.North = 0;
  room.South = 1;
  room.East = 0;
  room.West = 0;
  map[3][4] = room;

  room.room_type = "all_open";
  room.description = "\n\t You stand in a garden. It seems that it was well tended to, but you feel \n\n";
  room.x_val = 3;
  room.y_val = 2;
  room.North = 1;
  room.South = 1;
  room.East = 1;
  room.West = 1;
  map[3][2] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  room.room_type = "";
  room.description = "\n\t \n\n";
  room.x_val = 0;
  room.y_val = 0;
  room.North = 0;
  room.South = 0;
  room.East = 0;
  room.West = 0;
  map[0][0] = room;

  return;
}
