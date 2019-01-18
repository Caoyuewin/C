#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int  i = 0;

void reverse_string(char* p, int sz)
{
	if ((p + i) <= (p + sz - 1 - i))
	{
		char tmp = *(p + i);
		*(p + i) = *(p + sz - 1 - i);
		*(p + sz - 1 - i) = tmp;
		i++;
		reverse_string(p, sz);

	}

}

int main()
{
	int j = 0;
	char a[10] = "abcdefgh";
	
	int sz = strlen(a);
	
	for (j = 0; j < sz; j++)
	{
		printf("%c", a[j]);
	}
	printf("\n");

	reverse_string(a, sz);
	
	for (j = 0; j < sz; j++)
	{
		printf("%c", a[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}