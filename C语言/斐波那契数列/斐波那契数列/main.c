#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//
//int fib(int a)//迭代计算斐波那契数列
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(a - 1) + fib(a - 2);
//
//}

int fib(int m)//非迭代计算斐波那契数列
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 2;
	for (i = 0; i < m - 2; i++)
	{
		if (m < 3)
			return 1;
		a = b;
		b = c;
		c = a + b;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}