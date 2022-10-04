#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
//类型的定义
typedef struct PeoInfo 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char teke[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放添加进来的人的信息
	int sz;//记录当前通讯录中的有效信息个数

}Contact;