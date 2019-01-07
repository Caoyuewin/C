#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()//法一：将奇数项与偶数项拆开计算再求和
{
	int i = 0;
	double a = 0;
	double sum = 0;
	double sum_1 = 0;
	double sum_2 = 0;
	for (i = 1; i <= 50; i++)
	{
		a = (double)i;
		sum_1 = sum_1 + (1 / (2*a - 1));
	}
	
	for (i = 1; i <= 49; i++)
	{
		a = (double)i;
		sum_2 = sum_2 - (1 / (2*a));
	}
	printf("sum = %lf\n", sum_1 + sum_2);
	system("pause");
	return 0;

}

//int main()
//{
//	int a = 0;
//	int i = 1;
//	double a = (double)i;
//	printf("%d\n", i);
//	printf("%f\n", a);
//	printf("%d\n", sizeof(i));
//	printf("%d\n", sizeof(a));
//	system("pause");
//	return 0;
//}