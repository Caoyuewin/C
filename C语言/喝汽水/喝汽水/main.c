#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�


int main()
{
	int money = 0;//���
	int empty = 0;//���еĿ�ƿ����
	int count = 0;//���˶���ƿ

	printf("�������\n");
	scanf("%d", &money);
	empty = money;
	count = money;
	while (empty > 1)
	{
		count += empty / 2;
		empty = (empty / 2) + (empty % 2);
		//������ˮ��Ŀ�ƿ�� = ԭ�е���������2 + ʣ�µ�û�л���ƿ�ӣ�0/1��
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}