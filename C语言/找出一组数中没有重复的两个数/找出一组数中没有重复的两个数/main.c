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

struct Test search_dif(char* p)
{
	struct Test Dif;
	Dif.a = 1;
	Dif.b = 2;
	return  Dif;
}

int main()
{
	char arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	struct Test  = search_dif(arr);
	printf("%d,%d\n", .a, cyw.b);
	system("pause");
	return 0;
}
