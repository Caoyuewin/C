#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define EASY 10

void menu();
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
void PrintBoard(char Board[ROWS][COLS], int rows, int cols);
void SetBoom(char Borad[ROWS][COLS]);
void Expand(char boom[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int CountMine(char Board[ROWS][COLS], int x, int y);
int SearchBoom(char boom[ROWS][COLS], char show[ROWS][COLS], int rows, int cols);


#endif // !_GAME_H_
