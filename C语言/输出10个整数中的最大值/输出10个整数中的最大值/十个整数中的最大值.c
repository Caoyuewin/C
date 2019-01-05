#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10] = {3,6,4,8,4,15,4,25,10,6};
	int bigger=0;
	int i = 0;
	int c = 0;
	for (i = 0; i < 10; i++)
	{
		c = (a[i] - bigger);
		if (c >= 0)
		{
			bigger = a[i];
		}
	
	}
	printf("最大的数为%d\n", bigger);
	system("pause");

	return 0;
}