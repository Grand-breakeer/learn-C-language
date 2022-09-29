#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

/*结构体是一些值的集合*/

//结构体变量类型的声明

//struct tag {
//	int a;
//	float b;
//	/*.....*/
//
//};

//结构体可以针对一些含有复杂元素的对象进行定义，对其进行描述

//struct Book {
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6是全局结构体变量
//
////在结构体声明的时候可以不完全声明
////匿名结构体类型
////创建好了之后只能使用一次因为它没有结构体标签
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}*ps;
//
////结构体的自引用
//
//struct A {
//
//	int i;
//	char c;
//};
//
//struct B {
//
//	char c;
//	struct A sa;
//	double d;
//};

//struct N {
//	int d;
//	struct N n;
//};

//数据结构线性表中的链表

//typedef struct Node {//加入typedef可以对结构体重命名
//	int data;
//	struct Node* next;//这就是一个简单的结点
//}Node;
//
//
//int main()
//{
//	//这里的b1,b2,b3是局部结构体变量
//	//struct Book b1;
//	//struct Book b2;
//	//struct Book b3;
//	//写法不合理
//	//在编译器的角度会被理解为两个不同的类型
//	return 0;
//}

//结构体变量的定义和初始化

//typedef struct {
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//	return 0;
//}//错误的声明

//struct S
//{
//	char c;
//	int i;
//}s1,s2;//结构体的定义
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = { 'x',20 };//结构体的初始化
//	struct B sb = { 3.14,{'a',30},'q' };
//	//. ->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}

