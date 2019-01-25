#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("****************************************");
	printf("**************** 1.play ****************");
    printf("**************** 2.exit ****************");
	printf("****************************************");

}

void InitBoard(char Board[ROW][COL])//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void PrintBoard(char Board[ROW][COL])//��ӡ����
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%c     |%c     |%c     |\n", Board[i][0], Board[i][1], Board[i][2]);
		if (2 != i)
		{
			printf("------|------|------|\n");
		}
	}



}

void PlayerMove(char Board[ROW][COL])//�������
{
	int x = 0;
	int y = 0;
	printf("���������꣺");
	scanf("%d%d", &x, &y);

}

int CheckFull(char Board[ROW][COL])//��������Ƿ�����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

int CheckWin(char Board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)//����ͬ
	{
		if ((Board[i][0] == Board[i][1]) && (Board[i][1] == Board[i][2]))
		{
			if (Board[i][0] == 1)
			{
				printf("���Ի�ʤ\n");
			}
			if (Board[i][0] == 0)
			{
				printf("��һ�ʤ\n");
			}
		}
	}

	for (i = 0; i < COL; i++)//����ͬ
	{
		if ((Board[0][i] == Board[1][i]) && (Board[1][i] == Board[2][i]))
		{
			if (Board[0][i] == 1)
			{
				printf("���Ի�ʤ\n");
			}
			if (Board[0][i] == 0)
			{
				printf("��һ�ʤ\n");
			}
		}
	}

	if ((Board[0][0] == Board[1][1]) &&( Board[1][1] == Board[2][2]))//�Խ�����ͬ
	{
		if (Board[0][0] == 1)
		{
			printf("���Ի�ʤ\n");
		}
		if (Board[0][0] == 0)
		{
			printf("��һ�ʤ");
		}
	}


	if ((Board[0][2] == Board[1][1]) && (Board[1][1] == Board[2][0]))//�Խ�����ͬ
	{
		if (Board[0][2] == 1)
		{
			printf("���Ի�ʤ\n");
		}
		if (Board[0][2] == 0)
		{
			printf("��һ�ʤ");
		}
	}
}