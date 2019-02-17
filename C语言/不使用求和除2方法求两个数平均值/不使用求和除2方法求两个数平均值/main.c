#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

double average(double x, double y)
{
	if (x < y)
		return x + (y - x) / 2;
	return x - (x - y) / 2;
}

int main()
{
	double a = 0;
	double b = 0;
	printf("请输入两个整数\n");
	scanf("%lf%lf", &a, &b);
	double ret = average(a, b);
	printf("%lf\n", ret);
	system("pause");
	return 0;
}