#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int sum = 0;

int place_sum(int n)
{
	if (0 != n)
	{
		sum += n % 10 + place_sum(n = n / 10);
		
		return  sum;

	}
}

int main()
{
	int num = 0;
	printf("请输入一个非负整数：\n");
	scanf("%d", &num);
	int ret = place_sum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//int main()
//{
//	int num = 2 % 10;
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}