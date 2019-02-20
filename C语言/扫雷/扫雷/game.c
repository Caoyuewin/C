#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()//�˵�
{
	printf("************************************\n");
	printf("****      1.play    0.exit     *****\n");
	printf("************************************\n");
}

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)//��ʼ������
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

void PrintBoard(char Board[ROWS][COLS], int rows, int cols)//��ӡ����
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

void SetBoom(char Board[ROWS][COLS])//������
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

int SearchBoom(char boom[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int NotBoom = (ROW * COL) - EASY;
	while (NotBoom)
	{
		printf("���������꣺\n");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			if (boom[x][y] == '0')
			{
				show[x][y] = '&';
				NotBoom--;
				PrintBoard(show, ROWS, COLS);
			}
			if(boom[x][y] == '1')
			{
				PrintBoard(boom, ROWS, COLS);
				return 0;//�㵽���˷���0
			}
		}
		else
		{
			printf("��������Чֵ\n");
		}
	}
	return 1;//ɨ�׳ɹ�����1
}