#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int is_prime_number(int x)//ÅĞ¶ÏËØÊıº¯Êı
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int j = 0;
	for (j = 100; j <= 200; j++)
	{
		if (is_prime_number(j) == 1)
		{
			printf("%d ", j);
		}
	}
	system("pause");
	return 0;
}