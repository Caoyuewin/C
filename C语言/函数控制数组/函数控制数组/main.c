#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int i = 0;

void init(int* p,int sz)
{
	int m = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &m);
		 *(p + i) = m;
	}
}

void empty(int* p, int sz)
{
	for (i = 0; i < sz; i++)
	{
		*(p + i) =0 ;
	}
}

void reverse(int* p, int sz)
{
	int tem = 0;
	for (i = 0; i < sz/2; i++)
	{
		tem = *(p + i);
		*(p + i) = *(p + sz -1 - i);
		*(p + sz - 1 - i) = tem;

	}
}
 
int main()
{
	//初始化数组
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	printf("arr = { ");
	for (i = 0; i < sz; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("}");
	//逆置数组
	reverse(arr, sz);
	printf("\narr = { ");
	for (i = 0; i < sz; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("}");
	//清零数组
	empty(arr, sz);
	printf("\narr = { ");
	for (i = 0; i < sz; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("}/n");
		system("pause");
		return 0;

 }