#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char password[10] = {0};
	int i = 0;
	printf("����������\n"); 
	while (i < 3)
	{
		scanf("%s", &password);
		if (strcmp(password, "i am a pig") == 0)
		{
			printf("��½�ɹ�\n");
				break;
		}
		else
		{
			if (2 == i)
			{
				break;
			}
			else
				printf("�����������������\n");
		}
		i++;
	}
	if (i = 3)
		printf("�����˻��ѱ�������������֤����Ӫҵ������\n");
	system("pause");
	return 0;
}