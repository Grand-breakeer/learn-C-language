#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//发现错误---定位错误---确定错误原因---提出纠错方法---改正从新测试

//debug调试版本可调试文件体量大
//release发布版本文件体量小


void test()
{
	int a = 10;
	int b = 2;
	int c = a + b;
}


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		test();
		printf("%d\n", arr[i]);
	}


	return 0;
}

//环境准备

//快捷键

//f5启动调试直接启动

//f9设置/取消断点---配合f5使用用于中断代码运行
//用于分析代码区间


//f10逐过程//会跳过函数内部的细节

//f11逐语句比F10更加细腻（可以进入函数内部）

//Ctrl+F5开始执行不调式


//调试程序时查询相关信息
