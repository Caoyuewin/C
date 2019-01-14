#define _CRT_SECURE_NO_WARNINGS 1


void Swap(int *px, int *py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}