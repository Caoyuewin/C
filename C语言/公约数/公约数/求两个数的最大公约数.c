#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	printf("������������\n");
	scanf("%d%d", &a, &b);
	if (b > a)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (i = b; i >= 1; i--)
	{
		if ((b%i == 0) &&( a%i == 0))
		{
			printf("a,b�����Լ��Ϊ%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
	
}
