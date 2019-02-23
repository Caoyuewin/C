#define _CRT_SECURE_NO_WARNINGS 1
#include"mystring.h"

//包含返回目标字符串首地址，不包含返回NULL
char* my_strstr(char* dst, char* src)
{
	assert(dst);
	assert(src);

	char* start = dst;
	char* cut = src;
	while (*cut)
	{
		while (*src == *dst)
		{

		}
		while (*src != 0)
		{



			src++;
		}
		
		src++;
	}
	
}

char* my_strchr(char ch, char* src)
{
	assert(src);
	while (*src != ch)
	{
		if (*src == 0)
			break;
		src++;
	}
	return ((*src == 0) ? NULL : src);
	//return src;
}

int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == 0)
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}