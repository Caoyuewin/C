#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void my_memcpy(void* dst, void* src, size_t len)//void* 用于接收不确定类型的参数
{
	assert(dst);
	assert(src);
	while (len--)
	{
		*((char*)dst) = *((char*)src);//char类型大小为一个字节
		(char*)dst += 1;
		(char*)src += 1;
	}
}

void my_memmove(void* dst, void* src, size_t len)
{
	if (dst < src)//同memcpy
	{
		while (len--)
		{
			*((char*)dst) = *((char*)src);
			(char*)dst += 1;
			(char*)src += 1;
			
		}
	}
	else//正向拷贝会导致数据丢失，所以需要反向拷贝
	{
		*((char*)dst + len) = *((char*)src + len);
	}
}

int main()
{
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9};
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 16);
	my_memmove(arr1 + 2, arr1 + 4, 16);
	system("pause");

	return 0;
}
