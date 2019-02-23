#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strcat(char* dst, const char* src)
{
	assert(dst);
	assert(src);
	char* start = dst;
	while (*dst)
	{
		dst++;
	}
	while ((*dst++) = (*src++))
		;
	return start;

}

char* my_strcpy(char* dst,const char* src)
{
	char* start = dst;
	assert(dst);
	assert(src);
	while ((*dst++) = (*src++))
		;
	return start;

}

int main()
{
	char arr[20] = "hahaha";
	char arr1[20] = "hehehe";
	//my_strcpy(arr1, arr);
	//printf("%s\n", arr1);
	my_strcat(arr1, arr);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}