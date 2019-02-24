#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void my_memcpy(void* dst, void* src, size_t len)//void* ���ڽ��ղ�ȷ�����͵Ĳ���
{
	assert(dst);
	assert(src);
	while (len--)
	{
		*((char*)dst) = *((char*)src);//char���ʹ�СΪһ���ֽ�
		(char*)dst += 1;
		(char*)src += 1;
	}
}

void my_memmove(void* dst, void* src, size_t len)
{
	if (dst < src)//ͬmemcpy
	{
		while (len--)
		{
			*((char*)dst) = *((char*)src);
			(char*)dst += 1;
			(char*)src += 1;
			
		}
	}
	else//���򿽱��ᵼ�����ݶ�ʧ��������Ҫ���򿽱�
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
