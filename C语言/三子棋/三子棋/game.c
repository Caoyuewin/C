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
		printf("��Ӯ��\n");
	}
	if (ret == '$')
	{
		printf("������\n");
	}
	if (ret == 'P')
	{
		printf("ƽ��\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������Чֵ\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}