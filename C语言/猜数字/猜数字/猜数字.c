#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void menu()
{
	printf("1.play     0.exit\n");
}

void game()
{
	//����һ�������
	int ret = 0;
	int guess = 0;
	ret = rand()%100 + 1;
	//printf("%d\n",ret);
	while (1)//������
	{
		printf("���һ��1-100�������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}

		else if (guess < ret)
		{
			printf("��С��\n");
		}

		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
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
			printf("�����˳�����\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
	system("pause");

	return 0;
}
