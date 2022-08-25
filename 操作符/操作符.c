#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


/*
常见的操作符：
算数操作符
位操作符
赋值操作符
单目操作符
关系操作符
等...
*/


//1.算数操作符
//    +  -  *  /  %


//int main()
//{
//	//int a = 3 / 5;//都是整数叫做整数除法，向下去整
//	float a = 6.0/ 5.0;
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;//必须是整数
//	printf("%d", a);
//	return 0;
//}


//2.移位操作符
//
//int main()
//{
//	int a = 2;
//	int b = a << 1;//移动的是二进制位
//	//左移操作符：左边丢弃，右边补0
//
//	
//
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a >> 1;//移动的是二进制位
//	//右移操作符：1.算数右移
//	//              左边丢弃，右边补原符号位
//	//            2.逻辑右移
//	//              右移丢弃左边补0
//	//当前的右移操作符采用的是算数右移
//
//
//	printf("%d", b);
//	return 0;
//}


//3.位操作符
//必须是整数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&---按（2进制）位与
//	//有零为零，无零为1
//	/*int c = a & b;*/
//	//|---按（2进制）位或
//	////有1为1；无1位0
//	/*int c = a | b;*/
//	//^---按位（二进制）异或
//	//相同位0；相异为1
//	int c = a ^ b;
//	printf("%d\n",c);
//	
//
//	return 0;
//}

//例：交换a=3,b=5的值不能使用中间变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//数值太大会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//计算某个数二进制位中1的个数
//int main()
//{
//	int a = 0;
//	int count=0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		int b = 1;
//		int c = 0;
//		c = a & b;
//		if (c == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int a = 13;
//	int b = 31;
//	a = a | (1<<4);//改变二进制位某一位的数
//	printf("%d", a);
//	a = a & b;
//	printf("%d", a);
//	return 0;
//}

//4.赋值操作符

//= += -= *= /= >>= <<= %=

//int main()
//{
//	int a = 10;
//	a + 100 = a;
//	printf("%d", a);
//	return 0;
//}


//5.单目操作符（单目操作符只有一个操作数)

//（1）！逻辑反操作

//int main()
//{
//	int flag = 0;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	long long arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//单位是字节
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);*/
//	//证明sizeof是一个操作符不是函数
//
//	return 0;
//}

//int main()
//{
//	short s =5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof中的表达式不参与运算，它只在编译期间运行
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d", b);//~按二进制位取反
//
//	return 0;
//}


//int main()
//{
//	//++前置先++后使用
//	//后置先使用后++
//	//--同理
//
//	return 0;
//}

//6.取地址操作符
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&----取地址操作符
//	int *pa = &a;//pa是用来存放地址的-pa就是个指针变量
//	*pa = 20;//*--解引用操作符--间接访问操作符
//	printf("%d\n", a);//20
//	return 0;
//}


//7.强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//8.关系操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	if(a==b)
//		if(a!=b)
//			if(a>=b)
//				if(a<=b)
//					if(a<b)
//						if(a>b)
//	return 0;
//}

//=赋值   ==判断相等

//==

//比较两个字符串相等不能用等号用strcmp


//9.逻辑与   逻辑或
//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a && !b)
//	/*if(a||b)*/
//	{
//		printf("hehe");
//	}
//	return 0;
//}


//int main()
//{
//	/*int i = 0, a = 0, b = 2, c = 3, d = 4;*/
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*///从左到右出现0后面均不算
//	i = a++ || ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1234
//	return 0;
//}

//10.条件操作符（三目操作符）
//int main()
//{
//	int a = 3;
//	int b = 0;
//	/*if (a > 5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}*/
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

//11.逗号表达式
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式从左到右一次计算，但是整个表达式结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//	return 0;
//}


//12.下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[4]);//[]就是下标引用操作符
//	//[]的操作数是两个，一个是arr一个是4
//	return 0;
//}



//13.函数调用操作符
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret=Add(a, b);//()函数调用操作符
//	//操作数有三个add ，a ，b
//	return 0;
//}


//14.结构成员访问操作符
//.
//->

//结构体--int float char short double long longlong

//例如书：书名，书号，出版社，作者，定价

//可以自建结构体

//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C语言","c191918127",55 };
//	struct Book* pb = &b;
//
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);//结构体指针->成员名
//	printf("价格：%d\n", pb->price);
//
//	//printf("书名：%s\n", (*pb).name);
//	//printf("书号：%s\n", (*pb).id);//结构体变量名.成员名
//	//printf("价格：%d\n", (*pb).price);
//
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);//结构体变量名.成员名
//	//printf("价格：%d\n", b.price);//用----.----的方式可以访问结构体中的成员
//	return 0;
//}




//表达式求值

//隐式类型转换

//整型提升
//没有达到整型大小提升为整型
//1.高位为符号位且为0则全补0
//2.高位为符号位且为1则全补1

//int main()
//{
//	char a = 3;//00000011
//
//
//	char b = 127;//01111111
//
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000001 
//	//100000010-c
//	// 
//	//a和b都是char类型没有达到int的大小
//	//这里就会发生整型提升
//
//	//11111111111111111111111110000001-补码
//	//10000000000000000000000001111111-原码
//	printf("%d\n", c);
//	return 0;
//}