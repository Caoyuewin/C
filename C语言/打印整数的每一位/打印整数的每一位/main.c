#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n % 10);
}

int main()
{
	printf("请输入一个正整数\n");
	int num = 0;
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}