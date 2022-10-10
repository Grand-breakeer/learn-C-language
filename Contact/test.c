#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//test.c测试通讯录模块

//通讯录——静态版本
//1.通讯录能够存放1000个人的信息
// 每个人的信息：
// 名字+年龄+性别+电话+地址
// 2.增加人的信息
// 3.删除指定人的信息
// 4.修改指定人的信息
// 5.查找指定人的信息
// 6.排序通讯录的信息
// 

//版本2：动态增长的版本
//1.通讯录初始化后，能够存放三个人的信息
//2.当空间满了以后增加两个空间
//


void menu()
{
	printf("*****************************************\n");
	printf("************1.add      2.del*************\n");
	printf("************3.search   4.modify**********\n");
	printf("************5.sort     6.print***********\n");
	printf("************0.exit             **********\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	//给data申请一片连续的空间在堆区上
	//sz=0
	//capacity初始化为最大容量
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//销毁通讯录
			DestoryContact(&con);
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}