#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num = 0;
	int a = 0;
	int flag = 0;
	int count = 0;
	for (num = 100; num < 201; num++)
	{
		for (a = 2; a <= num; a++)
		{
			if (num%a == 0)
				flag++;
		}
		if (flag == 1)
		{
			printf("%d\n", num);
			count++;
		}

	
			flag = 0;
	}
	printf("100��200֮����%d������\n", count);
	system("pause");
	return 0;

}
/*int main()
    {
	int num = 0;
	int a = 0;
	int count = 0;
    for (num = 100; num < 201; num++)
	{
		for (a = 2; a <=num;a++)
		{
			if (num%a == 0 && a==num)
			{
				printf("%d������\n", num);
				count++;
				//break;
			}
			else
			{
				printf("%d��������\n", num);
			}
			

			
		}
		
	}
	printf("100��200֮����%d������\n", count);
	system("pause");
	return 0;

}*/