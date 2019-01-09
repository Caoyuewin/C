#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char password[10] = {0};
	int i = 0;
	printf("请输入密码\n"); 
	while (i < 3)
	{
		scanf("%s", &password);
		if (strcmp(password, "i am a pig") == 0)
		{
			printf("登陆成功\n");
				break;
		}
		else
		{
			if (2 == i)
			{
				break;
			}
			else
				printf("密码错误，请重新输入\n");
		}
		i++;
	}
	if (i = 3)
		printf("您的账户已被锁定，请持相关证件到营业厅解锁\n");
	system("pause");
	return 0;
}