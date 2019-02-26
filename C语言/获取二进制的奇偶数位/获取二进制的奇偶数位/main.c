#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。

void get_odd_even(int n)
{
	int num = n;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", (n >> i) & 1);
		}
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d", (n >> i) & 1);
		}
	}
	printf("\n");
}

int main()
{
	get_odd_even(15);
	system("pause");
	return 0;
}