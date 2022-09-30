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

//结构体的内存对齐
//结构体内存对齐规则：
//结构体第一个成员在结构体变量偏移量为零的地址处
//其他成员要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数=编译器默认的一个对齐数与该成员大小的较小值
//VS中默认为8  Linux平台无默认对齐数概念
//结构体的总大小为结构体所有成员的最大对齐数的整数倍
//如果嵌套了结构体，则嵌套结构体对齐到它最大对齐数的整数倍处
//此时结构体的大小就是包含嵌套结构体内所有最大对齐数的整数倍

struct S {
	int i;
	char c;
};

struct S2 {
	char c1;
	int i;
	char c2;
};

struct S3 {
	char c1;
	int i;
	double d;
};

struct S4 {
	char c1;
	char c2;
	int i;
};

struct S5 {
	int d;
	char c;
	int i;
};

struct S6 {
	char c1;
	struct S5 s5;
	double d;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//12

	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s3));//16

	struct S4 s4 = { 0 };
	printf("%d\n", sizeof(s4));//8

	struct S5 s5;
	printf("%d\n", sizeof(s5));//16

	struct S6 s6;
	printf("%d\n", sizeof(s6));//24
	return 0;
}

//为何要存在内存对齐
// 1.平台原因(移植原因)：不是所有的硬件平台都能访问任意地址上的任意数据的；
// 某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。 
//2.性能原因：数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
/*方便读取，所以拿空间换取时间*/