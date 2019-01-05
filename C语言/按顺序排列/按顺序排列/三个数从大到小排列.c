#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//void exchange(int x, int y)
//{
//	int t = 0;
//	if (y > x)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//
//
//}

int main()
{
	int a = 3;
	int b = 6;
	int c = 9;
	/*exchange(a,b);
	exchange(a,c);
	exchange(b,c);*/
	if (a < b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	if (a < c)
	{
		a = a ^ c;
		c = a ^ c;
		a = a ^ c;

	}
	if (b < c)
	{
		b = b ^ c;
		c = b ^ c;
		b = b ^ c;
	}

	printf("%d%d%d\n", a,b,c);
	system("pause");
	return 0;

}