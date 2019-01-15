#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int m = 1;

int n_to_k(int n,int k)
{
	
	if (0 != k)
	{
		m *= n;
		k--;
		n_to_k(n, k);

	}
	return m;
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n,&k);
	int ret = n_to_k(n,k);
	printf("%d", ret);
	
	system("pause");
	return 0;
}