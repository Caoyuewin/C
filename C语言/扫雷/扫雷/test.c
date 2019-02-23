#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()//扫雷
{
	char boom[ROWS][COLS];
	char show[ROWS][COLS];
	char set_boom = '0';
	char set_show = '*';
	InitBoard(boom, ROWS, COLS, set_boom);//初始化棋盘
	InitBoard(show, ROWS, COLS, set_show);
	PrintBoard(boom, ROWS, COLS);//打印棋盘
	PrintBoard(show, ROWS, COLS);
	SetBoom(boom);//设置雷
	PrintBoard(boom, ROWS, COLS);//查看布置雷的情况
	int ret = SearchBoom(boom, show, ROWS, COLS);//扫雷
	if (ret == 0)
	{
		printf("嘿嘿，你被炸死了\n");
	}
	if (ret == 1)
	{
		printf("扫雷成功\n");
	}

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
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