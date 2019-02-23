#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//1.abcdef -> a , bcdef -> bcdefa(循环k次，左旋k个字符）

//判断是否左旋后字符串的函数
is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	return (strstr(str1, str2) != NULL);//包含为真返回1，不包含为假返回0
	
}

//左旋函数
void left_move(char* p, int sz, int k)//p是待左旋字符的首地址
{
	int i = 0;
	int j = 0;
	for (j = 0; j < k; j++)
	{
		char n = p[0];//将首元素取出
		for (i = 0; i < sz - 1; i++)//将后面的元素依次前移
		{
			p[i] = p[i + 1];
		}
		p[sz - 1] = n;//
		
	}
}

int main()
{
	char arr[20] = "abcdef";
	char arr1[20] = "abcdef";
	int sz = strlen(arr);
	left_move(arr, sz, 2);//旋转arr
	printf("%s\n", arr);
	int ret = is_left_move(arr, arr1);//arr是否arr1旋转后的字符串
	if (ret == 0)
		printf("不是arr1左旋后的字符串\n");
	if (ret == 1)
		printf("是arr1左旋后的字符串\n");
	system("pause");
	return 0;
}