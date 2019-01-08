#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a[100] = { 0 };
	int left = 0;
	int right = (sizeof(a) / sizeof(a[0])-1);
	int k = 33;
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		a[i] = i;
	}
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}

		else if(a[mid] > k)
		{
			right = mid - 1;
		}

		else
		{
			printf("找到了,下标是%d\n",mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("找不到数字%d\n", k);
	}

	system("pause");
	return 0;

}