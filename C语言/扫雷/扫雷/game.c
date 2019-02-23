#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()//菜单
{
	printf("************************************\n");
	printf("****      1.play    0.exit     *****\n");
	printf("************************************\n");
}

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)//初始化棋盘
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}

void PrintBoard(char Board[ROWS][COLS], int rows, int cols)//打印棋盘
{
	int i = 0;
	int j = 0;

	printf(" ");
	for (i = 1; i < rows - 1; i++)
	{
		printf(" %d ",  i);
	}
	printf("\n");

	for (i = 1; i < rows - 1; i++)
	{
		printf("%d", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf(" %c ", Board[i][j]);
		}
		printf("\n");

	}
	printf("\n");
}

void SetBoom(char Board[ROWS][COLS])//设置雷
{
	int count = EASY;
	while (count)
	{
		int x = rand() % 9;
		int y = rand() % 9;
		if (Board[x + 1][y + 1] == '0')
		{
			Board[x + 1][y + 1] = '1';
			count--;
		}
	}
}

int CountMine(char boom[ROWS][COLS], int x, int y)
{
	return (boom[x - 1][y] + boom[x - 1][y - 1] + boom[x][y - 1] + boom[x + 1][y - 1] +
		boom[x + 1][y] + boom[x + 1][y + 1] + boom[x][y + 1] + boom[x - 1][y + 1] - 8 * '0');
}

void Expand(char boom[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x > 0 && CountMine(boom, x - 1, y) == 0)
	{
		show[x][y] = ' ';
		x -= 1;
		Expand(boom, show, x, y);
	}
	else
		show[x][y] = CountMine(boom, x, y) + '0';
}
int SearchBoom(char boom[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int NotBoom = (ROW * COL) - EASY;
	while (NotBoom)
	{
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			if (boom[x][y] == '0')
			{
				char count = CountMine(boom, x, y);
				//show[x][y] = count + '0';
				NotBoom--;
				Expand(boom, show, x, y);
				PrintBoard(show, ROWS, COLS);
				PrintBoard(boom, ROWS, COLS);
			}
			if(boom[x][y] == '1')
			{
				PrintBoard(boom, ROWS, COLS);
				return 0;//点到雷了返回0
			}
		}
		else
		{
			printf("请输入有效值\n");
		}
	}
	return 1;//扫雷成功返回1
}