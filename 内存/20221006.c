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

//动态内存开辟
//malloc（向内存申请一片联系的空间开辟成功返回void*开辟失败返回NULL）
//calloc free（只能释放动态内存开辟的空间，如果释放的空间是非动态内存开辟的，则free的行为是未定义的） realloc

//栈区
//局部变量  函数形参

//静态区
//全局变量
//静态变量

//int main()
//{
//	//假设开辟10个整型空间--10*sizeof(int)
//	int arr[10];//栈区
//	//动态内存开辟
//	int* p =(int*) malloc(10 * sizeof(int));
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		printf("malloc error\n");
//		perror("main");
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);
//	}
//
//	//回收空间
//	free(p);//并不会把p置为空指针
//	p = NULL;//手动置空
//	//malloc和free一般是成对出现的
//	return 0;
//}

//calloc（在内存开辟一个指定元素类型个数的数组并将所有元素设置为0）

//int main()
//{
//	//int* p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//调整空间大小
//	//realloc调整空间
//	//后面紧接着的空间够就运用后面的空间
//	//后面紧接着的空间不够用就找一片能够容纳所有元素的空间
//	//找不到合适的空间返回空指针，需要备份
//	int*ptr=(int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//realloc传输空指针的功能类似于malloc

//就可以把通讯录开辟为动态增长版本

//动态内存分配常见错误
//1.对NULL指针的解应用操作
//当内存函数返回指针时应该对函数返回的指针进行判空处理
//int main()
//{
//	int* p=malloc(100000000000000);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//2.对动态开辟的空间越界访问

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//产生了越界访问
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.free非动态开辟的空间
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//使用略
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.free释放动态内存中的一部分

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存开辟的空间多次释放

//int main()
//{
//	int* p = (int*)malloc(100);
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//	//释放
//	free(p);
//	return 0;
//}

//6.动态开辟的空间忘记释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//	
//	//忘记释放导致内存泄漏
//}
//int main()
//{
//	test();
//	//......
//	return 0;
//}

//动态开辟的空间两种回收方式
//1.主动free
//2.程序结束


//面试题
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.str传给GetMemory函数的时候是值传递，所以GetMemory函数的形参
// p是str的一份临时拷贝。在GetMemory函数内部动态申请的地址，存放在p
// 中，不会影响外边的str，所以当GetMemory函数返回之后，str仍然是NULL，所以strcpy会
// 失败
// 
// 当GetMemory函数返回之后，形参p销毁，使得动态开辟的100个字节存在内存泄漏
// 无法释放。
//

//正确的写法1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf传递的是字符串首地址并不是实际的字符串
//}
//int main()
//{
//	Test();
//	return 0;
//}

//正确的写法2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
// free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//第二题
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//返回栈空间地址的问题
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//GetMemory函数内部创建的数组是在栈上创建的除了函数，p数组
//的空间就还给了操作系统如果通过返回的地址，就是非法地址
//再对齐访问就是非法访问

//第三题
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free（p）;
//}//缺少free
//
//int main()
//{
//	Test();
//	return 0;
//}

//第四题
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free之后一定要置空
	//str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}
