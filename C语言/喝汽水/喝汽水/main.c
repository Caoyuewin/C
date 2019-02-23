#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。


int main()
{
	int money = 0;//金额
	int empty = 0;//现有的空瓶数量
	int count = 0;//喝了多少瓶

	printf("请输入金额：\n");
	scanf("%d", &money);
	empty = money;
	count = money;
	while (empty > 1)
	{
		count += empty / 2;
		empty = (empty / 2) + (empty % 2);
		//换完汽水后的空瓶数 = 原有的数量除以2 + 剩下的没有换的瓶子（0/1）
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}