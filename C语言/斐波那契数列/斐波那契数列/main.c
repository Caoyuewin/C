#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int fib(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
		return fib(a - 1) + fib(a - 2);

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}