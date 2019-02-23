#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//1.abcdef -> a , bcdef -> bcdefa(ѭ��k�Σ�����k���ַ���

//�ж��Ƿ��������ַ����ĺ���
is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	return (strstr(str1, str2) != NULL);//����Ϊ�淵��1��������Ϊ�ٷ���0
	
}

//��������
void left_move(char* p, int sz, int k)//p�Ǵ������ַ����׵�ַ
{
	int i = 0;
	int j = 0;
	for (j = 0; j < k; j++)
	{
		char n = p[0];//����Ԫ��ȡ��
		for (i = 0; i < sz - 1; i++)//�������Ԫ������ǰ��
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
	left_move(arr, sz, 2);//��תarr
	printf("%s\n", arr);
	int ret = is_left_move(arr, arr1);//arr�Ƿ�arr1��ת����ַ���
	if (ret == 0)
		printf("����arr1��������ַ���\n");
	if (ret == 1)
		printf("��arr1��������ַ���\n");
	system("pause");
	return 0;
}