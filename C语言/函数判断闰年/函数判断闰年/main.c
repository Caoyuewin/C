#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int is_leap_year(int a)
{
	if (((0 == a % 4) && (0 != a % 100)) || (0 == a % 400))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;

}
