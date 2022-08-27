#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


//编号-地址-指针
//int main()
//{
//	int a = 10;//a占四个字节的空间
//	int *pa=&a;//拿到的是a的四个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了指针走一步走多远（步长）
//3.
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//int a = 0x11223344;
//	///*int* pa = &a;
//	//*pa = 0;*/
//	//char* pc = &a;
//	//*pc = 0;//类型发生变化，访问权限发生变化
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;
//	}
//	return 0;
//}

