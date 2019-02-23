#define _CRT_SECURE_NO_WARNINGS 1
#include"mystring.h"

int main()
{
	char src[] = "bbcd";
	char dst[] = "bbcd";
	printf("%d\n", my_strcmp(src, dst));
	//printf("%s\n", my_strchr('g', src));
	//printf("%s\n", my_strstr(dst, src));
	system("pause");
	return 0;
}