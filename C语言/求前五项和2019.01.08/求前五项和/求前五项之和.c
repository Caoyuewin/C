#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int num = 0; 
	int m = 1;
	int sum = 0;
	printf("������һ����:");
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		m *= num;//ÿһ�μ���i��num���
		sum += m;//�����������
	}
	printf("ǰ�����=%d\n", sum);
	system("pause");
	return 0;

}