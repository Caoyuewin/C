#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()//ɨ��
{
	char boom[ROWS][COLS];
	char show[ROWS][COLS];
	char set_boom = '0';
	char set_show = '*';
	InitBoard(boom, ROWS, COLS, set_boom);//��ʼ������
	InitBoard(show, ROWS, COLS, set_show);
	PrintBoard(boom, ROWS, COLS);//��ӡ����
	PrintBoard(show, ROWS, COLS);
	SetBoom(boom);//������
	PrintBoard(boom, ROWS, COLS);//�鿴�����׵����
	int ret = SearchBoom(boom, show, ROWS, COLS);//ɨ��
	if (ret == 0)
	{
		printf("�ٺ٣��㱻ը����\n");
	}
	if (ret == 1)
	{
		printf("ɨ�׳ɹ�\n");
	}

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
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