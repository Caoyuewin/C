#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int sum;

int Digitsum(int n)
{
	if (0 != n)
	{
	    sum += n % 10;
		n = n / 10;
		Digitsum(n);

	}
	
	return sum;
	
}

int main()
{
	int num = 0;
	printf("请输入一个非负整数：\n");
	scanf("%d", &num);
	int ret = Digitsum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
