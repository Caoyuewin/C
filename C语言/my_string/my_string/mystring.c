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
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == 0)
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;

}

char* my_strncpy(char* dst, char* src, size_t n)
{
	assert(dst);
	assert(src);
	char* start = dst;
	while (n--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	return start;
}

char* my_strncat(char* dst, char* src, size_t n)
{
	assert(dst);
	assert(src);
	char* start = dst;
	while (n--)
	{
		while (*dst != 0)
		{
			dst++;
		}
		*dst = *src;
		dst++;
		src++;
	}
	return start;
}

int my_strncmp(char* str1, char* str2, size_t n)
{
	n--;
	assert(str1);
	assert(str2);
	while ((*str1 == *str2) && n--)
	{
		if (*str1 == 0)
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}