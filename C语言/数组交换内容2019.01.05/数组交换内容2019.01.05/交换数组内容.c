#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x[6] = { 1,3,5,7,9,11 };
	int y[6] = { 0,2,4,6,8,10 };
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		x[i] = x[i] ^ y[i];
		y[i] = x[i] ^ y[i];
		x[i] = x[i] ^ y[i];
	}
	for (i = 0; i < 6; i++)
	{
		printf("%3d", x[i]);
	
	}
	printf("\n");
	for (i = 0; i < 6; i++)
	{
		for (i = 0; i < 6; i++)
	{
		printf("%3d", y[i]);
	
	}
		printf("\n");
	}
	system("pause");
	return 0;
	

}