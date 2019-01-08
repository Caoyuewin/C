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
	//产生一个随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100 + 1;
	//printf("%d\n",ret);
	while (1)//猜数字
	{
		printf("请猜一个1-100间的数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}

		else if (guess < ret)
		{
			printf("猜小了\n");
		}

		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("正在退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
	system("pause");

	return 0;
}
