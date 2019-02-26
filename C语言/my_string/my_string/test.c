#define _CRT_SECURE_NO_WARNINGS 1
#include"mystring.h"

int main()
{

	char src[] = "bbdd";
	char dst[10] = "bbda";
	printf("%d\n", my_strncmp(dst, src, 4));
	//printf("%s\n", my_strncat(dst, src, 2));
	//printf("%s\n", my_strncpy(dst, src, 6));
	//printf("%d\n", my_strcmp(src, dst));
	//printf("%s\n", my_strchr('g', src));
	//printf("%s\n", my_strstr(dst, src));
	system("pause");
	return 0;
}