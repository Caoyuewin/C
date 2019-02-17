#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("****************************************");
	printf("**************** 1.play ****************");
    printf("**************** 2.exit ****************");
	printf("****************************************");

}

void InitBoard(char Board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void PrintBoard(char Board[ROW][COL],int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (i < row - 1)
				printf("|");
		}
		printf("\n");
		if (i < col - 1)
		{
			for (j = 0, j < col, j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char Board[ROW][COL])//玩家下棋
{
	int x = 0;
	int y = 0;
	printf("请输入坐标：");
	scanf("%d%d", &x, &y);

}

int CheckFull(char Board[ROW][COL], int row, int col)//检查棋盘是否填满
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

int CheckWin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//行相同
	{
		if ((Board[i][0] == Board[i][1]) && (Board[i][1] == Board[i][2]))
		{
			if (Board[i][0] == 1)
			{
				printf("电脑获胜\n");
			}
			if (Board[i][0] == 0)
			{
				printf("玩家获胜\n");
			}
		}
	}

	for (i = 0; i < col; i++)//列相同
	{
		if ((Board[0][i] == Board[1][i]) && (Board[1][i] == Board[2][i]))
		{
			if (Board[0][i] == 1)
			{
				printf("电脑获胜\n");
			}
			if (Board[0][i] == 0)
			{
				printf("玩家获胜\n");
			}
		}
	}

	if ((Board[0][0] == Board[1][1]) &&( Board[1][1] == Board[2][2]))//对角线相同
	{
		if (Board[0][0] == 1)
		{
			printf("电脑获胜\n");
		}
		if (Board[0][0] == 0)
		{
			printf("玩家获胜");
		}
	}


	if ((Board[0][2] == Board[1][1]) && (Board[1][1] == Board[2][0]))//对角线相同
	{
		if (Board[0][2] == 1)
		{
			printf("电脑获胜\n");
		}
		if (Board[0][2] == 0)
		{
			printf("玩家获胜\n");
		}
	}
}