#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char ch = getchar();
	while ((ch = getchar())!= EOF)
	{
		if ( (ch >= 65) && ch <= 90)
		{
			//printf("%c\n", ch+32);
			putchar(ch+32);
		}

		else if (ch >= 97 && ch <= 122)
		{
			//printf("%c\n", ch - 32);
			putchar(ch - 32);
		}

		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÊäÈë×ÖÄ¸\n");
		}
	}
	//printf("%c\n",)
	//putchar(ch);
	//printf("%d\n", ch);
	system("pause");
	return 0;
}

//int main()
//
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//
//}
//
