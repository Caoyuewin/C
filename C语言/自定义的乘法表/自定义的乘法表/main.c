#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



void mul(int a)
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 1; i <=a ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			num = j * i;
			printf("%d * %d = %d  ", j, i, num);
		}
		printf("\n");

	}
}

int main()
{
	
	int k = 0;
	//t mul = 1;
	while (1)
	{
		printf("请确定行列数:");
		scanf("%d", &k);
		if (k>12)
			break;
		mul(k);
		
	}

	system("pause");
	return 0;
}