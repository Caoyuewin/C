#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>


int my_strlen(char* p)//·ÇµÝ¹é
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}


int my_strlen2(char* p)//µÝ¹é
{
	if (*p != '\0')
	{
		return 1 + my_strlen2(p + 1);
	}
	else
	{
		return 0;
	}
}



int main()
{
	int i = 0;
	char a[10] = "abcdefg";
	int ret = my_strlen(a);
	int ret_2 = my_strlen2(a);
	printf("%d\n ", ret);
	printf("%d\n ", ret_2);
	system("pause");
	return 0;
}