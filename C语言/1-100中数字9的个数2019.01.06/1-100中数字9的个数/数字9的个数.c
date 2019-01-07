#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()                      
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		/*if (((i % 9 == 0) && (i < 10))|| (i % 10 == 9))
			count++;
		else if ((i / 10) % 9 == 1)
			count++;
		else  if (((i / 10) % 9 == 1))
			count++;*/
		if (i < 10 && i % 9 == 0)//9
			count++;
		else if ((i >= 10 && i < 90) && (i % 10 == 9))//19-89
			count++;
		else if ((i >= 90) && (i <= 98) && (i%90<10))//90-98
			count++;
		else if ((i > 98) && (i <= 100) && (i % 90 < 10))//99
			count += 2;
		
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}