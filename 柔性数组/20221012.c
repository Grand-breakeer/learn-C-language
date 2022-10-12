#define  _crt_secure_no_warnings	
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


//柔性数组：c99中允许结构体的最后一个元素是未知大小的数组
//struct S{
//	int n;
//	int arr[];//大小是未知的
//	//这个数组称为柔性数组
//	//int arr[0]//也可以这样写
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n", sizeof(s));
//
//	//期望arr的大小是十个整型
//	struct S*ps=malloc(sizeof(struct S)+10*sizeof(int));
//	//模式为柔型数组前的大小+期望柔性数组的大小
//	//可以用realloc函数调整大小所以称为柔性数组
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S*ptr=realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//柔性数组的成员之前必须至少有一个成员
//sizeof返回的结构的大小不包括柔性数组的大小
//包含柔性数组的结构统一1用malloc开辟空间，


//用指针实现柔性数组
//struct S {
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S*ps=(struct s*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->arr = (int*)malloc(10 * sizeof(int));
//	if (ps->arr == NULL)
//	{
//		return 2;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//增加
//	int*ptr=realloc(ps->arr, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//用柔性数组开辟空间可以减少malloc的使用，减少内存碎片的产生
//有利于提高内存的利用率，可以更好地维护内存，一定程度上提高访问速度
//方便释放内存
//局部性原理：
//1.空间局部性：当使用一个内存的时候接下来有很大概率使用它的周边内存
// 柔性数组就很好地适应了这一个特性



