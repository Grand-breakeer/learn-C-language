#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//结构的基础知识
//结构是一些值的集合，这些集合称为成员变量


//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;//结构体变量可以是另一个结构体的成员
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1\s2也是创建的结构体变量只不过是全局变量
//
//
//int main()
//{
//	//s是局部变量
//	struct Stu s={{'w',20,3.14},"张山",30,"20200534"};//对象
//	//两个操作符
//	//. |  ->
//	
//
//	/*printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);*/
//
//
//	//结构体指针
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;//结构体变量可以是另一个结构体的成员
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1, s2;//s1\s2也是创建的结构体变量只不过是全局变量
//
//
////传参时会压栈，结构体过大会导致栈被占用过多性能下降
//void print1(struct Stu t)//从空间角度会浪费空间//从时间角度来说传不同的值也会浪费时间
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)//此方法传参效率高，空间时间效率高
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14},"张山",30,"20200534" };//对象
//	//写一个函数打印s
//	print1(s);
//
//	print2(&s);
//
//	return 0;
//}

//int Add(int x, int y)//每一个函数的调用都会在内存的栈区上开辟空间
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//}