#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
	// ���� 1��λ�� 
//}

int count_one_bits(size_t n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (n & 1)//ȡ���������е�ÿһλ
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