#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct inventory{
char* main_weapon;
char* secondary_weapon;
char* slot_1;
char* slot_2;
char* slot_3;
char* slot_4;
char* slot_5;
char* slot_6;
char* slot_7;
char* slot_8;
char* slot_9;
char* slot_10;
};

struct board{
  int x_val;
  int y_val;
} current_board;

int health(char Character_name[20]);
int damage(char Character_name[20]);
int speed(char Character_name[20]);
int compare(int first_cmp, int second_cmp);
void story_start(char Character_name[20]);
int player_in(char *decision[30]);
void inventory(struct inventory main_char_inv);
