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

//struct S {
//	int i;
//	char c;
//};
//
//struct S2 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S3 {
//	char c1;
//	int i;
//	double d;
//};
//
//struct S4 {
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S5 {
//	int d;
//	char c;
//	int i;
//};
//
//struct S6 {
//	char c1;
//	struct S5 s5;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//8
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//8
//
//	struct S5 s5;
//	printf("%d\n", sizeof(s5));//16
//
//	struct S6 s6;
//	printf("%d\n", sizeof(s6));//24
//	return 0;
//}

//为何要存在内存对齐
// 1.平台原因(移植原因)：不是所有的硬件平台都能访问任意地址上的任意数据的；
// 某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。 
//2.性能原因：数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
/*方便读取，所以拿空间换取时间*/

//通过调整顺序减少内存浪费
//空间小的字节尽量集合在一起

//修改默认对齐数
//把默认对齐数改为2

//#include<stddef.h>
////#pragma pack(1)//8//2//1
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12//8//6
//
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//offsetof宏的实现，计算某成员相对于起始成员的偏移量

//结构体传参数

//struct S {
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}

//传参的时候会压栈，建议结构体传参传地址

//C语言位段的概念，依附于结构体

//位段成员必须是，int ,unsigned int ,signed int
//位段成员名后面必须有冒号数字

//比如

//struct A {
//
//	int _a : 2;//_a成员占两个bit位
//	int _b : 5;//_b成员占5个bit位
//	int _c : 10;//_c成员占10个bit位
//	int _d: 30;//_d成员占30个bit位
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}

//位段有很多不确定因素，所以注重可移植性的程序应该避免使用位段

//struct S {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main() {//仅仅适配VS
//	struct S s = { 0 };//观察位段的空间分配
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//位段中的int是被当为有符号还是无符号是不确定的
//位段中的最大位数不确定
//位段中的成员在内存中从左向右分配还是从右向左分配是不确定的
//当一个结构体包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位是，是舍弃还是运用是不确定的
//位段相对于结构体可以节省空间但是可移植性很差
//


//枚举类型
//枚举类型的定义

//enum Color {
//	//颜色
//	red,//枚举类型的可能取值，是一种常量类型
//	green,
//	blue
//};
//int main()
//{
//	//cpp语法检查更加严格
//	enum Color c = blue;
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", blue);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************");
//	printf("********1.add     2.sub***********");
//	printf("********3.mul     4.div***********");
//	printf("*************0.exit***************");
//}
//enum Option {
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do {
//		menu;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input) {
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//枚举的优点
//1.增加代码的可读性和可维护性
//2.性对于define定义的标识符枚举类型有类型检查，更加严谨
//3.便于调试
//4.防止命名污染
//使用方便可以一次性定义多个常量

//枚举定义的常量是int型

//联合（共用体）
//联合也是特殊的自定义类型
//它的成员完全可能公用同一块空间
//至少是最大成员的大小
//在同一时间只能使用其中的一个成员
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;//联合体变量
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));//i与c共用了同一块空间
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//利用联合体判断机器大小端存储

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1) {
//		return 1;
//	}
//	else {
//		return 0;;
//	}
//}
int check_sys()
{
	union U {
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	//返回以就是小端
	//返回0就是大端
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else {
		printf("大端");
	}
	return 0;
}