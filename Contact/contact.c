#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
//初始化通讯录--静态版本
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	//memset():-内存设置
//	memset(pc->data, 0, sizeof(pc->data));
//}
// 
 void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;//初始化后默认是0
	pc->capacity = DEFAULT_SZ;
}
//增加联系人--静态版本
//void Addcontact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s",pc->data[pc->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc ->sz++;
//	printf("增加成功\n");
//
//}
// 动态版本
 void Addcontact(Contact* pc)
 {
	 //考虑增容
	 if (pc->sz == pc->capacity)
	 {
		 PeoInfo*ptr=realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		 if (ptr != NULL)
		 {
			 pc->data = ptr;
			 pc->capacity += INC_SZ;
			 printf("增容成功\n");
		 }
		 else
		 {
			 perror("AddContact");
			 return;
		 }
	 }
	 printf("请输入名字:>");
	 scanf("%s", pc->data[pc->sz].name);
	 printf("请输入年龄:>");
	 scanf("%d", &(pc->data[pc->sz].age));
	 printf("请输入性别:>");
	 scanf("%s", pc->data[pc->sz].sex);
	 printf("请输入电话:>");
	 scanf("%s", pc->data[pc->sz].tele);
	 printf("请输入地址:>");
	 scanf("%s", pc->data[pc->sz].addr);

	 pc->sz++;
	 printf("增加成功\n");

 }
//显示联系人
void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr
			);
	}

}
//查找联系人
static int FindByname(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到
}

//删除联系人
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人
	//有就删除，没有就提示没有
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	int i = 0;
	for (i = pos; i < (pc->sz)-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

//查找联系人
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);

	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr
		);
	}
}

//修改联系人
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);

	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr
		);
		printf("修改成功\n");
	}
}

//销毁通讯录
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}