#define _CRT_SECURE_NO_WARNINGS 1
//����ɾ���顢��
//��ӡȫ��������������������м�¼
//����1���ṹ������������Ρ�Ƕ��
#include"addresslist.h"




int main()
{
	Book list;
	void(*pfun[7])(Book* p2) = {0, Add, Delete, Find, Amend, PrintAll, CleanAll};
	InitList(&list);
	int ret = 0;		
	do {
		ret = menu();

		if (ret == 0)
			break;
		if (ret < 1 || ret > 6) {
			printf("��������Чֵ��\n");
			continue;
		}
		else {
			(*pfun[ret])(&list);//&�ṹ�������->�ṹ���ַ
             PrintAll(&list);
			 printf("\n");
		}
	} while (ret);
	system("pause");
	return 0;
}