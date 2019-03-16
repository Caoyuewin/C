#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"


//���ܲ˵�
int menu() {
	int choice = 0;
	printf("��ѡ��\n");
	printf("***********************************************\n");
	printf("**************** 1.������ϵ�� *****************\n");
	printf("**************** 2.ɾ����ϵ�� *****************\n");
	printf("**************** 3.������ϵ�� *****************\n");
	printf("**************** 4.������ϵ������ *************\n");
	printf("**************** 5.��ʾ������ϵ�� *************\n");
	printf("**************** 6.���������ϵ�� *************\n");
	printf("**************** 0.�˳� ***********************\n");
	printf("***********************************************\n");
	scanf("%d", &choice);
	return choice;
}

//��ʼ����ϵ���б�
void InitList(Book* plist) {
	plist->count = 0;
	plist->num = malloc(sizeof(Addresslist));
	plist->capacity = 1;
}



//���ݺ���
void Capacity(Book* plist) {	

	Addresslist* newplist = (Addresslist*)realloc(plist->num, sizeof(Addresslist) * plist->capacity + 1);
	plist->capacity++;
	if (newplist != NULL) {
		plist->num = newplist;	
	}
}

//��ӡ��ϵ��
void PrintAll(Book* plist) {
	unsigned int i = 0;
	printf("ͨѶ¼\n");
	for (i = 0; i < (plist->count); i++) {
		printf("������%s\n", plist->num[i].name);
		printf("�绰���룺%s\n", plist->num[i].phone);
	}
}

//�����ϵ��
void Add(Book* plist) {
	if (plist->count == plist->capacity) {
		Capacity(plist);
	}
	printf("��ϵ��������\n");
	scanf("%s", plist->num[plist->count].name);//��������
	printf("��ϵ�˺��룺\n");
	scanf("%s", plist->num[plist->count].phone);//�������
	plist->count++;
}

//�ͷſ��ٵĿռ�
//void Free() {
//	free(newplist);
//}

//���Һ���
static int Findname(char* pname, Book* plist) {
	unsigned int i = 0;
	for (i = 0; i < (plist->count); i++) {
		int ret = strcmp(pname, plist->num[i].name);
		if (ret == 0) {
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void Delete(Book* plist) {
	char name[1024] = { 0 };
	int choice = 0;
	printf("����Ҫɾ������ϵ��������\n");
	scanf("%s", name);
	printf("ȷ��Ҫɾ����ϵ����\n");
	printf("1.��   0.��\n");
	scanf("%d", &choice);
	if (choice) {
		int num = Findname(name, plist);
		if (num >= 0) {
			unsigned int i = 0;
			for (i = num; i < plist->count; i++) {
				plist->num[num + i] = plist->num[num + i + 1];
			}
			plist->count--;
			printf("ɾ���ɹ�\n");


		}
		else
			printf("�Ҳ�����ϵ��\n");
	}
	else
		printf("�������˵�\n");


}

//������ϵ��
void Find(Book* plist) {
	char name[1024] = { 0 };
	printf("��������ϵ��������\n");
	scanf("%s", name);
	int num = Findname(name, plist);
	if (num != -1) {
		printf("�ҵ���");
		printf("���� ��%s\n", plist->num[num].name);
		printf("���룺%s\n", plist->num[num].phone);

	}
	else
		printf("�Ҳ�����ϵ�ˡ�\n");
}

//�޸���ϵ��
void Amend(Book* plist) {
	char name[1024] = { 0 };
	printf("���޸���ϵ��������\n");
	scanf("%s", name);
	int num = Findname(name, plist);
	if (num != -1) {
		printf("������������ϵ����Ϣ\n");
		printf("��ϵ��������\n");
		scanf("%s", plist->num[num].name);
		printf("��ϵ�˺��룺\n");
		scanf("%s", plist->num[num].phone);
		printf("�޸ĳɹ�\n");
		printf("������%s\n", plist->num[num].name);
		printf("���룺%s\n", plist->num[num].phone);



	}
	else
		printf("�Ҳ�����ϵ��\n");

}


//���ͨѶ¼
void CleanAll(Book* plist) {
	int choice = 0;
	printf("ȷ��Ҫɾ��������ϵ����\n");
	printf("1.��  0.��");
	scanf("%d", &choice);
	if (choice) {
		unsigned int i = 0;
		for (i = 0; i < plist->count; i++) {
			*plist->num[i].name = 0;
			*plist->num[i].phone = 0;
		}

	}
}

//���浽�����ļ���
void Save(Book* plist) {
	FILE* pf;
	pf = fopen("myfile2.txt", "a+");
	if (pf != NULL) {
		for (int i = 0; i < plist->count; i++) {
			//fscanf(&plist->num[i], sizeof(Addresslist), pf);
			fwrite(&plist->num[i], sizeof(Addresslist), 1, pf);
		}
	}
	else
		perror("fopen() failed:");
	fclose(pf);
}
