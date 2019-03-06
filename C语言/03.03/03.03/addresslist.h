#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _ADDRESSLIST_H_
#define _ADDRESSLIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>



typedef struct Addresslist {
	char name[1024];
	char phone[1024];
}Addresslist;//模块编程时如果多模块需要使用结构体就在头文件定义结构体

typedef struct Book {
	Addresslist num[200];
	unsigned int count;
}Book;


int menu();
void InitList(Book* plist);//初始化通讯录
void Add(Book* plist);//添加联系人
void PrintAll(Book* plist);//打印所有联系人
void Delete(Book* plist);//删除联系人
void Find(Book* plist);//查找联系人
void Amend(Book* plist);//修改联系人
void CleanAll(Book* plist);//清除所有联系人



#endif // !_ADDRESSLIST_H_
