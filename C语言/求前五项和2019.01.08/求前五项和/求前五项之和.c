#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int num = 0; 
	int m = 1;
	int sum = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		m *= num;//每一次计算i个num相乘
		sum += m;//对五次求过求和
	}
	printf("前五项和=%d\n", sum);
	system("pause");
	return 0;

}