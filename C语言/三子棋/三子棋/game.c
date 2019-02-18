#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char Board[ROW][COL];	
	InitBoard(Board, ROW, COL);
	PrintBoard(Board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(Board, ROW, COL);
		ret = CheckWin(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		ComputerMove(Board, ROW, COL);
		ret = CheckWin(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了\n");
	}
	if (ret == '$')
	{
		printf("你输了\n");
	}
	if (ret == 'P')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	char Board[ROW][COL] = {0};
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入有效值\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}