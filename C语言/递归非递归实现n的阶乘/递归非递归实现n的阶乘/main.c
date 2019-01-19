#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int recursion(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return recursion(n - 1) * n;
	}
}

int factorial(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int num = 0;
	int i = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	int ret_1 = factorial(num);
	int ret_2 = recursion(num);
	printf("%d\n", ret_1);
	printf("%d\n", ret_2);
    system("pause");
	return 0;
}