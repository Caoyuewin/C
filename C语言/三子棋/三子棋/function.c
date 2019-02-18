#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("**************** 1.play ****************\n");
    printf("**************** 0.exit ****************\n");
	printf("****************************************\n");

}

void InitBoard(char Board[ROW][COL], int row, int col)//��ʼ������
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

void PrintBoard(char Board[ROW][COL],int row, int col)//��ӡ����
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

void PlayerMove(char Board[ROW][COL],int row, int col)//�������
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����ߣ�\n");
		printf("���������꣺\n");
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
				printf("�����ѱ�ռ�ã�����������\n");
		}
		else
			printf("��������Чֵ\n");
	}
	
}

void ComputerMove(char Board[ROW][COL], int row, int col)//���������һ��λ��
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
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

static int CheckFull(char Board[ROW][COL], int row, int col)//��������Ƿ�����
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
	for (i = 0; i < row; i++)//����ͬ
	{
		if ((Board[i][0] == Board[i][1]) && (Board[i][1] == Board[i][2]) && Board[i][1] != ' ')
		{
			return Board[i][0];
		}
	}

	for (i = 0; i < col; i++)//����ͬ
	{
		if ((Board[0][i] == Board[1][i]) && (Board[1][i] == Board[2][i]) && Board[1][i] != ' ')
		{
			return Board[0][i];
		}
	}

	if ((Board[0][0] == Board[1][1]) &&( Board[1][1] == Board[2][2]) && Board[1][1] != ' ')//�Խ�����ͬ
	{
		return Board[0][0];
	}
	
	if ((Board[0][2] == Board[1][1]) && (Board[1][1] == Board[2][0]) && Board[1][1] != ' ')//�Խ�����ͬ
	{
		return Board[0][2];
	}
	
	int ret = CheckFull(Board, row, col);
	if (ret == 1)
		return 'P';
	return ' ';
}