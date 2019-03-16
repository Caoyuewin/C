#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"


//功能菜单
int menu() {
	int choice = 0;
	printf("请选择：\n");
	printf("***********************************************\n");
	printf("**************** 1.增加联系人 *****************\n");
	printf("**************** 2.删除联系人 *****************\n");
	printf("**************** 3.查找联系人 *****************\n");
	printf("**************** 4.更改联系人资料 *************\n");
	printf("**************** 5.显示所有联系人 *************\n");
	printf("**************** 6.清空所有联系人 *************\n");
	printf("**************** 0.退出 ***********************\n");
	printf("***********************************************\n");
	scanf("%d", &choice);
	return choice;
}

//初始化联系人列表
void InitList(Book* plist) {
	plist->count = 0;
	plist->num = malloc(sizeof(Addresslist));
	plist->capacity = 1;
}



//扩容函数
void Capacity(Book* plist) {	

	Addresslist* newplist = (Addresslist*)realloc(plist->num, sizeof(Addresslist) * plist->capacity + 1);
	plist->capacity++;
	if (newplist != NULL) {
		plist->num = newplist;	
	}
}

//打印联系人
void PrintAll(Book* plist) {
	unsigned int i = 0;
	printf("通讯录\n");
	for (i = 0; i < (plist->count); i++) {
		printf("姓名：%s\n", plist->num[i].name);
		printf("电话号码：%s\n", plist->num[i].phone);
	}
}

//添加联系人
void Add(Book* plist) {
	if (plist->count == plist->capacity) {
		Capacity(plist);
	}
	printf("联系人姓名：\n");
	scanf("%s", plist->num[plist->count].name);//输入姓名
	printf("联系人号码：\n");
	scanf("%s", plist->num[plist->count].phone);//输入号码
	plist->count++;
}

//释放开辟的空间
//void Free() {
//	free(newplist);
//}

//查找函数
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

//删除联系人
void Delete(Book* plist) {
	char name[1024] = { 0 };
	int choice = 0;
	printf("输入要删除的联系人姓名：\n");
	scanf("%s", name);
	printf("确定要删除联系人吗？\n");
	printf("1.是   0.否\n");
	scanf("%d", &choice);
	if (choice) {
		int num = Findname(name, plist);
		if (num >= 0) {
			unsigned int i = 0;
			for (i = num; i < plist->count; i++) {
				plist->num[num + i] = plist->num[num + i + 1];
			}
			plist->count--;
			printf("删除成功\n");


		}
		else
			printf("找不到联系人\n");
	}
	else
		printf("返回主菜单\n");


}

//查找联系人
void Find(Book* plist) {
	char name[1024] = { 0 };
	printf("待查找联系人姓名：\n");
	scanf("%s", name);
	int num = Findname(name, plist);
	if (num != -1) {
		printf("找到了");
		printf("姓名 ：%s\n", plist->num[num].name);
		printf("号码：%s\n", plist->num[num].phone);

	}
	else
		printf("找不到联系人。\n");
}

//修改联系人
void Amend(Book* plist) {
	char name[1024] = { 0 };
	printf("待修改联系人姓名：\n");
	scanf("%s", name);
	int num = Findname(name, plist);
	if (num != -1) {
		printf("请重新输入联系人信息\n");
		printf("联系人姓名：\n");
		scanf("%s", plist->num[num].name);
		printf("联系人号码：\n");
		scanf("%s", plist->num[num].phone);
		printf("修改成功\n");
		printf("姓名：%s\n", plist->num[num].name);
		printf("号码：%s\n", plist->num[num].phone);



	}
	else
		printf("找不到联系人\n");

}


//清除通讯录
void CleanAll(Book* plist) {
	int choice = 0;
	printf("确定要删除所有联系人吗？\n");
	printf("1.是  0.否");
	scanf("%d", &choice);
	if (choice) {
		unsigned int i = 0;
		for (i = 0; i < plist->count; i++) {
			*plist->num[i].name = 0;
			*plist->num[i].phone = 0;
		}

	}
}

//保存到本地文件夹
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
