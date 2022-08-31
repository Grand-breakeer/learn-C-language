#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//发现错误---定位错误---确定错误原因---提出纠错方法---改正从新测试

//debug调试版本可调试文件体量大
//release发布版本文件体量小


//void test()
//{
//	int a = 10;
//	int b = 2;
//	int c = a + b;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//环境准备

//快捷键

//f5启动调试直接启动

//f9设置/取消断点---配合f5使用用于中断代码运行
//用于分析代码区间


//f10逐过程//会跳过函数内部的细节

//f11逐语句比F10更加细腻（可以进入函数内部）

//Ctrl+F5开始执行不调式


//调试程序时查询相关信息


//函数调用堆栈反应的是函数调用逻辑（入栈--出栈）
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	int a = 10;
//	int b = 2;
//	int c = a + b;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//案例1
//调试解决的是运行错误并不是语法错误


//对每一步代码都有预期值，再与实际值比较才能更好地找到问题

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	//int ret = 1;//应该在j循环后重置ret的值
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//1.i和arr是局部变量局部变量是放在栈区上的

//栈区地址使用习惯是先使用高地址空间再使用低地址空间

//2.数组随着下标增长地址由低到高变化的

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 19; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码运行结果--死循环
//	return 0;
//}