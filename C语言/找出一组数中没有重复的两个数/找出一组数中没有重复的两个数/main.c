#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

//1.��������
//1 2 3 4 5 6 1 2 3 4

struct Test
{
	int a;
	int b;
};

struct Test search_dif(char* p, size_t n)
{
	struct Test Dif;
	struct Test Dif  = 0;
	Dif.b = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a = (p[i] &= 1);
	}
	return  Dif;
}

int main()
{
	char arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	struct Test  = search_dif(arr, 10);
	printf("%d,%d\n", .a, cyw.b);
	system("pause");
	return 0;
}
