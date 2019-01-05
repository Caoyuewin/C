#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()//引入第三变量交换数值
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数a,b\n");
//	scanf("%d%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}




int main()//通过异或操作交换数值
{
	int a = 0;
	int b = 0;
	printf("请输入a，b两个数\n");
	scanf("%d%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}