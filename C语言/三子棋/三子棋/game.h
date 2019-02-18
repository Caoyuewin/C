#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char Board[ROW][COL], int row, int col);
void PrintBoard(char Board[ROW][COL], int row, int col);
void menu();
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char CheckWin(char Board[ROW][COL], int row, int col);
int CheckFull(char Board[ROW][COL], int row, int col);


#endif