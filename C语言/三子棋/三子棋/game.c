#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	char Board[ROW][COL] = { 0 };
	InitBoard(Board);
	PrintBoard(Board);
	system("pause");
	return 0;
}