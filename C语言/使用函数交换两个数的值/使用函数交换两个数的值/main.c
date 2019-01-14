#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"swap.h"

//extern void Swap(int *px, int *py);

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;

}