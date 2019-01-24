#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char Board[ROW][COL])//≥ı ºªØ∆Â≈Ã
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void PrintBoard(char Board[ROW][COL])//¥Ú”°∆Â≈Ã
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%c     |%c     |%c     |\n", Board[i][0], Board[i][1], Board[i][2]);
		if (2 != i)
		{
			printf("------|------|------|\n");
		}
	}
}

void PlayerMove()
{

}