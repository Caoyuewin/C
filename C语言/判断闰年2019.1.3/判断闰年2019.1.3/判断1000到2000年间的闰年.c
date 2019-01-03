#include<stdio.h>
#include<stdlib.h>

//闰年：能被4整除但不能被100整除
int main()
{
	int year = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
			printf("%d\n", year);
	}
	system("pause");
	return 0;
	
}