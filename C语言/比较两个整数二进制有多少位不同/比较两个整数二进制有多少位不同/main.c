#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Binarycmp(size_t x, size_t y)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) != ((y >> i) & 1))
			count++;

	}
	return count;
}

int main()
{
	printf("%d\n", Binarycmp(8, 15));
	system("pause");
	return 0;
}