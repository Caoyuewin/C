#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char Board[ROW][COL];	
	PrintBoard(Board, ROW, COL);
	while (1)
	{
		char ret = 0;
		PlayerMove(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
		ComputerMove(Board, ROW, COL);
		PrintBoard(Board, ROW, COL);
	}
}
int main()
{
	int input = 0;
	char Board[ROW][COL] = {0};
	InitBoard(Board, ROW, COL);
	menu();
	do
	{
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