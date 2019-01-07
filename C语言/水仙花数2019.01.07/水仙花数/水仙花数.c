#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int od = 0;
	int td = 0;
	int hd = 0;
	for (i = 0; i < 999; i++)//step1:分别提取数字的三个位
	{
		hd = i / 100;
		if (0 != hd)
		{
			td = (i % 100) / 10;
			od = (i % 100) % 10;
			if (i == (od * od * od + td * td * td + hd * hd * hd))
			{
				printf("%d ", i);
			}
		}
	}
	system("pause");
	return 0;

}