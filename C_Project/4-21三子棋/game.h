
#ifndef C_PROJECT_GAME_H
#define C_PROJECT_GAME_H
#define row 3
#define col 3
#include "time.h"
#include "stdlib.h"
void InitArray(char board[row][col]);
void game();
void playerMove(char board[row][col]);
void computerMove(char board[row][col]);
char isWin(char board[row][col]);
int isFull(char board[row][col]);
#endif //C_PROJECT_GAME_H
