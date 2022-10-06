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


int main()
{
	int* p = calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	//调整空间大小
	//realloc调整空间
	//后面紧接着的空间够就运用后面的空间
	//后面紧接着的空间不够用就找一片能够容纳所有元素的空间
	//找不到合适的空间返回空指针，需要备份
	int*ptr=(int*)realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
