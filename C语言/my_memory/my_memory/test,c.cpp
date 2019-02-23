#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_memcpy(void* dst, void* src)
{
	assert(dst);
	assert(src);
	while()
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_memcpy(arr2, arr1);
	system("pause");
	return 0;
}