#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��ȡһ�������������������е�ż��λ������λ�� 
//�ֱ�������������С�

void get_odd_even(int n)
{
	int num = n;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", (n >> i) & 1);
		}
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d", (n >> i) & 1);
		}
	}
	printf("\n");
}

int main()
{
	get_odd_even(15);
	system("pause");
	return 0;
}