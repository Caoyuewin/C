#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int sum;

int place_sum(int n)
{
	if (0 != n)
	{
	    sum += n % 10;
		n = n / 10;
		place_sum(n);

	}
	
	return sum;
	
}

int main()
{
	int num = 0;
	printf("������һ���Ǹ�������\n");
	scanf("%d", &num);
	int ret = place_sum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
