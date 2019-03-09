#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _LIST_H_
#define _LIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>



typedef struct Addresslist {
	char name[1024];
	char phone[1024];
}Addresslist;//ģ����ʱ�����ģ����Ҫʹ�ýṹ�����ͷ�ļ�����ṹ��

typedef struct Book {
	Addresslist* num[1];
	unsigned int count;
	unsigned int capacity ;
}Book;


int menu();
void InitList(Book* plist);//��ʼ��ͨѶ¼
void Add(Book* plist);//�����ϵ��
void PrintAll(Book* plist);//��ӡ������ϵ��
void Delete(Book* plist);//ɾ����ϵ��
void Find(Book* plist);//������ϵ��
void Amend(Book* plist);//�޸���ϵ��
void CleanAll(Book* plist);//���������ϵ��
Book* Capacity(Book* plist);//�绰������
void Free();//�ͷŶ�̬���ٵĿռ�





#endif // !1
