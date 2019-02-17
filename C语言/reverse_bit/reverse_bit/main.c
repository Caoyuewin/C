#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit()
{
	
}

int main()
{
	int num = 0;
	printf("请输入一个整数\n");
	scanf("%d", &num);
	int ret = reverse_bit(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}