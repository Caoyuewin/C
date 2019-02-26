#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
	// 返回 1的位数 
//}

int count_one_bits(size_t n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (n & 1)//取出二进制中的每一位
		{
			count++;
		}
		n >>= 1;
	}
	return count;
}

int main()
{
	unsigned int n = 9;
	printf("%d\n", count_one_bits(n));
	system("pause");
	return 0;
}