#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("**************** 1.play ****************\n");
    printf("**************** 0.exit ****************\n");
	printf("****************************************\n");

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
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col -1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char Board[ROW][COL],int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走：\n");
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		x--;
		y--;
		if (x < row && x >= 0 && y < col && y >= 0)
		{
			if (Board[x][y] == ' ')
			{
				Board[x][y] = '*';
				break;
			}
		    if (Board[x][y] == '$')
				printf("坐标已被占用，请重新输入\n");
		}
		else
			printf("请输入有效值\n");
	}
	
}

void ComputerMove(char Board[ROW][COL], int row, int col)//电脑随机走一个位置
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '$';
			break;
		}
	}
}

static int CheckFull(char Board[ROW][COL], int row, int col)//检查棋盘是否填满
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

char CheckWin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//行相同
	{
		if ((Board[i][0] == Board[i][1]) && (Board[i][1] == Board[i][2]) && Board[i][1] != ' ')
		{
			return Board[i][0];
		}
	}

	for (i = 0; i < col; i++)//列相同
	{
		if ((Board[0][i] == Board[1][i]) && (Board[1][i] == Board[2][i]) && Board[1][i] != ' ')
		{
			return Board[0][i];
		}
	}

	if ((Board[0][0] == Board[1][1]) &&( Board[1][1] == Board[2][2]) && Board[1][1] != ' ')//对角线相同
	{
		return Board[0][0];
	}
	
	if ((Board[0][2] == Board[1][1]) && (Board[1][1] == Board[2][0]) && Board[1][1] != ' ')//对角线相同
	{
		return Board[0][2];
	}
	
	int ret = CheckFull(Board, row, col);
	if (ret == 1)
		return 'P';
	return ' ';
}