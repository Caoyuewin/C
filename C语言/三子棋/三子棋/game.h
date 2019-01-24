#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void InitBoard(char Board[ROW][COL]);
void PrintBoard(char Board[ROW][COL]);
#endif