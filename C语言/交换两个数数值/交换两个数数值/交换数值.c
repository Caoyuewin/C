#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()//�����������������ֵ
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������a,b\n");
//	scanf("%d%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}




int main()//ͨ��������������ֵ
{
	int a = 0;
	int b = 0;
	printf("������a��b������\n");
	scanf("%d%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}