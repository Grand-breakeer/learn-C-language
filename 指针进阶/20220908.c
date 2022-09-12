#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//字符指针

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//
//	//本质上是吧“hello bit”这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";//实际存储的是‘h'的地址
//	char arr[] = "hello bit";
//    *ps = 'w';//不可更改
//	printf("%c\n", *(ps+1));
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//    //因为字符串指针并没有把字符串存进去，所以两个指针指向同一个字符串
//
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//常量字符串
//    const char* str4 = "hello bit.";
//
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//int main()
//{
//	//指针数组
//	//数组--数组中存放的是指针
//	//int* arr[3];//存放整型指针得数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//等价于
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针是指向数组的指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd就是一个指针
//	
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr就是一个数组指针--其中存放的是数组的地址
//
//	//arr;//arr--数组名是首元素地址--arr[0]的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);//地址一样类型不一样
//
//	printf("%p\n", p1);
//	printf("%p\n", p2 + 1);
//	return 0;
//}

//
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof（数组名）--数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名--数组名表示的是整个数组
//

//数组指针的使用

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));//对于数组指针的来讲的，一次解引用是拿到的是数组地址，然后再解引用才是具体元素
//	}
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
////
////数组指针的应用
//
//void print2(int(*p)[5],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0;i<r;i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 }, { 3,4,5,6,7} };
//	//二维数组的数组名表示首元素的地址
//	//二维数组的首元素是第一行
//	//print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//整型数组
//
//
//	int(*parr2)[10];//数组指针，该指针指向一个数组，数组10个元素，每个元素是int
//
//
//	int(*parr[10])[5];//parr3是一个存放数组指针的数组
//	//该数组能够存放10个数组指针
//	//每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型
//}

//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？0
//{}
//void test(int* arr[5])//ok？0
//{}
//void test(int(*arr)[5])//ok？1
//{}
//void test(int** arr)//ok？0
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);//一级指针传参用一级指针接收
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);//同类型指针
//	return 0;
//}

//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参
//
//	test(ppa);
//
//	test(&pa);//传一级指针变量的地址
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
//	printf("%d ", a);
//
//	return 0;
//}

/*一级指针
* int* p--整型指针--指向整型的指针
* char* pc--字符指针--指向字符的指针
* void* pv--无类型的指针
* 
* 
* 二级指针
* char** p
* int** p
* 
* 数组指针：指向数组的指针
* int(*p)[4];
*/

/*数组
* 一维数组
* 二维数组
* 
* 指针数组--存放指针的数组
*/


/*函数指针
*指向函数的指针
*/

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr是指向数组的指针-存放的是数组的地址
//
//	//函数指针--存放函数的指针
//	//&函数名-取到的是函数的地址
//
//	int(*pf)(int, int) = &Add;//pf就是函数指针的变量
//
//	printf("%p\n", &Add);
//	printf("%d\n", Add);
//
//	return 0;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//int(*pf)(int, int) = &Add;//pf就是函数指针的变量
	int(*pf)(int, int) = Add;
	//int ret=(*pf)(3, 5);//运用函数指针调用其所指向的函数
	int ret = pf(3, 5);
	printf("%d\n", ret);

	return 0;
}