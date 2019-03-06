#define _CRT_SECURE_NO_WARNINGS 1
//增、删、查、改
//打印全部、按姓名排序、清空所有记录
//问题1：结构体的声明、传参、嵌套
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
			printf("请输入有效值：\n");
			continue;
		}
		else {
			(*pfun[ret])(&list);//&结构体变量名->结构体地址
             PrintAll(&list);
			 printf("\n");
		}
	} while (ret);
	system("pause");
	return 0;
}